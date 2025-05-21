// C++ code
//variaveis


String frutas[5];
float precoFrutas[5];
int estoqueFrutas[5];

void setup()
{
  Serial.begin(9600);
  Serial.println("****** programa cadastro de frutas ******"); //imprime um cabeçalho
  Serial.println();
}

void loop()
{
  for( int i = 0; i < 5; i++){
  Serial.println("digite uma fruta ");
  while(! Serial.available()); 
  frutas[i] = Serial.readString();

  
  Serial.println("digite o preco da fruta " + frutas[i]);
  while(! Serial.available()); 
  precoFrutas[i] = Serial.parseFloat();
    
    
  Serial.println("digite a quantidade de frutas no estoque " + estoqueFrutas[i]);
  while(! Serial.available()); 
  estoqueFrutas[i] = Serial.parseInt();
    
  } 
  
  Serial.println("****** listagem das frutas ******");
  Serial.println();
  
  for( int i = 0; i < 5; i++){
  Serial.println("produto: " + frutas[i]);
  Serial.println("preco:R$" + String(precoFrutas[i]));\
  Serial.println("total de frutas no estoque " +String(estoqueFrutas[i]));   
  Serial.println("---");
  }
  
  
  delay(3000);
  
}