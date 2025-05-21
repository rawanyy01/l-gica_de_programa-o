
void setup()
{
  Serial.begin(9600);
}

void loop()       

{
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  int idades[4]; 

  for(int i = 0; i < 4; i++){
    Serial.println("digite a idade de " + nomes[i]);
    while(! Serial.available());
    idades[i] = Serial.parseInt();
  }
  
 

  int numeral = 1;
  for(int i = 0; i < 4; i++)
  {

    Serial.println(String(i + 1) + "o nome: " + nomes[i]);
    Serial.println("idade: " + String(idades[i]));
    Serial.println();							
  }


  delay(2000);


}