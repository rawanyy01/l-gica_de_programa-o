
void setup()
{
  Serial.begin(9600);
}

void loop()       
  
                //       0         1        2         3
{
  String nomes[4] = {"Eduardo", "Lucas", "Rafa", "Salgado"};
  Serial.println(nomes[2]);
  
  nomes[2] = "Diogo";
  
  Serial.println(nomes[2]);
   
  int idades[5];
  
  idades[0] = 50;
  idades[1] = 55;
  idades[2] = 5;
  idades[3] = 15;
  idades[4] = 12;

  
  
  Serial.println(idades[0]);
  Serial.println(idades[1]);  
  Serial.println(idades[3]); 
  Serial.println(idades[4]); 
  Serial.println(idades[5]);
  
  delay(2000);
  
  
}