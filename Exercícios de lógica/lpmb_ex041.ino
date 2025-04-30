// Faça um programa que receba o nome, o peso e a altura de uma
//pessoa.
//Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
// (altura * altura).

String nome = " ";
float peso = 0;
float altura = 0; 
float IMC = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //entrada
  Serial.println("qual seu nome?: ");
  while( !Serial.available());
  nome = Serial.readStringUntil('\n');
  
  Serial.println("qual seu peso?: ");
  while( !Serial.available());
  peso = Serial.parseFloat();
  
  Serial.println("qual sua altura?: ");
  while( !Serial.available())
  altura = Serial.parseFloat();
  
  //processamento
  IMC = peso / (altura * altura);
  
  //saída
  Serial.println("Nome: " + nome);
  Serial.print("IMC: ");
  Serial.println(IMC, 2);
}