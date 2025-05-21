// C++ code
//
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
  Serial.println(" ");
  Serial.println(" "); 
  Serial.println(" --- PROGRAMA HJOGOS DE DADOS ---"); 
  Serial.println(" "); 
  Serial.println(" "); 
 
  Serial.println("Digite um palpite de 1 a 6"); 
  while(! Serial.available());
  int palpite = Serial.parseInt();
  
  
  int numeroSorteado = random(1, 7);
  
  Serial.println("seu palpite: " + String(palpite));
  Serial.println("numero do dado: " + String(numeroSorteado));
  
  if(palpite == numeroSorteado){
  Serial.println("parabens voce acertou");
  }else{  
  Serial.println("que pena, tente outra vez");

  }
  
  delay(1000);
}