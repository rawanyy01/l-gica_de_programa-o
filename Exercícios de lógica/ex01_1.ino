// C++ code
//
int idade = 18;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("qual sua idade?" );
 while( !Serial.available());
 idade = Serial.parseInt();
 
  
  
  
  if(idade >= 18){
    Serial.println("Maior de idade ");
  } else {
    Serial.println("Menor de idade");
  }
}