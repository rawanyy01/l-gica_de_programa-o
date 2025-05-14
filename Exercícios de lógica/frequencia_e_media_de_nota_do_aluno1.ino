// C++ code
//
float nota1 = 0;
float nota2 = 0;
float frequencia = 0;
float media = 0;

void setup()
{
Serial.begin(9600);
  
 Serial.println("primeira nota: ");
 while( !Serial.available());
 nota1 = Serial.parseFloat();
 Serial.println("segunda nota: ");
 while( !Serial.available());
 nota2 = Serial.parseFloat();
 Serial.println("media: " + String(media));
 Serial.println("frequencia: ");
 while( !Serial.available());
 frequencia = Serial.parseFloat();
  
  if(media >= 6 && frequencia >= 75 ){
  media = nota1 + nota2  / 2;
  Serial.println("APROVADO ");
  }else if(media >= 6 && frequencia < 75){
  Serial.println("APROVADO POR NOTA");
  }else if(media < 6 && frequencia >= 75){
  Serial.println("APROVADO POR FREQUENCIA");
  }else if(media >= 6 && frequencia < 75){
  Serial.println("REPROVADO POR FREQUENCIA");
  }else if(media < 6 && frequencia >= 75){
  Serial.println("REPROVADO POR NOTA");
  }else if(media == 10 && frequencia == 100){
  Serial.println("Parabéns! Nota máxima!");
  }else{
   Serial.println("REPROVADO POR FREQUENCIA E MEDIA DA NOTA");
  }
  
 
  }



void loop()
{
  
  
}