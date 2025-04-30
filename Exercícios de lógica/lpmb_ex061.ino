// Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

float polegadas = 0;
float centimetros = 0; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("polegadas: ");
  while ( !Serial.available());
  polegadas = Serial.parseFloat();
    
  delay(500);
  
  //processamento
  centimetros = polegadas * 2.54;
    
  //saída
  Serial.println("centimetros: " + String(centimetros));
}