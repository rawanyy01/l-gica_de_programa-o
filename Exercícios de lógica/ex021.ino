// C++ code
//

String cor = " ";


void setup()
{
  Serial.begin(9600);
}


void loop()
{
 Serial.println("digite a cor de um semaforo (verde ou vermelho) " );
 while( !Serial.available());
 cor = Serial.readString(); 
  
  if(cor == "vermelho"){
    Serial.println(" pare");
  } else {
    Serial.println("siga ");
  }
  
  
}