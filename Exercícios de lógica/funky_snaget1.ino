// C++ code
//variaveis

int idade = 15;
int suaIdade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("qual sua idade? ");
 while( !Serial.available ());
 suaIdade = Serial.parseInt();
  
  Serial.println("Idade: " + String(idade));
  
  if(idade >= 16){
    Serial.println("voto obrigatorio");
  } else {
    Serial.println("sem idade para votar");
  }
  
  delay(2000);
}