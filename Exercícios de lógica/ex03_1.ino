// C++ code
//

int numero = 6;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
 Serial.println("digite um numero de 0 a 10" );
 while( !Serial.available());
 numero = Serial.parseInt(); 
  
  
  if(numero >= 6){
    Serial.println("aprovado ");
  } else {
    Serial.println("reprovado");
  }
}