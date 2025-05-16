int  tabuadaEscolhida;
int resultado;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("qual a tabuada escolhida?");
  while(!Serial.available()){}
  tabuadaEscolhida = Serial.parseInt();
  
  for(int contador =1; contador <= 10; contador++){
  Serial.println(String( tabuadaEscolhida) + "X" + String(contador) + "=" + String( tabuadaEscolhida * contador));
  
  }
  
}

void loop()
{
}