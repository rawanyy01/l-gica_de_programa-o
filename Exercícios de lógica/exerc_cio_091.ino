// C++ code
//

String nome = " ";
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
  
  Serial.println("digite o salario do funcioario");
  while( !Serial.available());
  salario = Serial.parseFloat();
  
  
  if(salario < 500){
  salario = salario + (salario * 0.30);
  }else {
  Serial.println("voce nao pode receber esse aumento");
  }
  
  Serial.println("funcionario: " + nome);
  Serial.println("salario: " + String(salario));


}