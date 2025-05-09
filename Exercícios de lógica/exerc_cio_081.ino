// C++ code
//

String nome = " ";
String cargo = " "; 
float salario = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite o nome do funcioario");
  while( !Serial.available());
  nome = Serial.readString();
  
  Serial.println("digite o cargo do funcioario");
  while( !Serial.available());
  cargo = Serial.readString();
  
  Serial.println("digite o salario do funcioario");
  while( !Serial.available());
  salario = Serial.parseFloat();
  
  
  if(salario < 1000){
  salario = salario + (salario * 0.10);
    
  }
  
  Serial.println("funcionario: " + nome);
  Serial.println("cargo: " + cargo);
  Serial.println("salario: " + String(salario));


}