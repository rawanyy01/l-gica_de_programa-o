// Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

float centimetros = 0;
float polegadas = 0;


void setup()
{
Serial.begin(9600);
}


void loop()
{
 //entrada 
 Serial.println("centimetros: ");
 while ( !Serial.available() );
 centimetros = Serial.parseFloat();
  
 delay(500);
   
 //processamento
 polegadas = centimetros / 2.54;
  
 //saída
 Serial.println("polegadas: " + String(polegadas));
}