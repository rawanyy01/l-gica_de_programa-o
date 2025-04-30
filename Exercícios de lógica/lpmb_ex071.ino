//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário 

String nome = " ";
String cargo = " ";
float salario = 0;
float salarioNovo = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()

{
 //entrada
  Serial.println("nome: ");
  while( !Serial.available());
  nome = Serial.readString();
  
  Serial.println("cargo: ");
  while( !Serial.available());
  cargo = Serial.readString();
  
  Serial.println("salario: ");
  while( !Serial.available());
  salario = Serial.parseFloat();
  
  //processamento
  salarioNovo = salario + 1 * 10;
  
  //saída
  Serial.println("nome: " + String(nome));
  Serial.println("cargo: " + String(cargo));
  Serial.println("salarioNovo:  " + String(salarioNovo));

  }