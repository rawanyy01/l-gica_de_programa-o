// C++ code
//variaveis 
String nome[7];
String email[7];
int idade[7]; 

void setup()
{
Serial.begin(9600);
  
  Serial.println("****** FESTA DA RAW :) ******");
  Serial.println();
  
}

void loop()
{
 for( int i = 0; i < 7; i++){
  Serial.println("digite o seu nome: ");
  while(! Serial.available()); 
  nome[i] = Serial.readString();
   
  Serial.println("digite o seu email: ");
  while(! Serial.available()); 
  email[i] = Serial.readString();
   
  Serial.println("digite a sua idade: ");
  while(! Serial.available()); 
  idade[i] = Serial.parseInt();
  Serial.println();
 }
  
  Serial.println("****** LISTAGEM DOS CONVIDADOS ******");
  Serial.println();
  
  for( int i = 0; i <= 6; i++){
  Serial.println("convidados: " + nome[i]);
  Serial.println("idades: " + idade[i]);
  Serial.println("emails: " + email[i]);
  Serial.println();

  }
  
  
  
  
  
}