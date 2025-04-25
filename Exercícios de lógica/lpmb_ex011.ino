// faça um programa que receba a idade de uma pessoa em anos e 
//imprima essa idade em: mesem dias, horas e minutos.

//declaração de variáveis
int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0; 
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("digite sua idade em anos");
  while( !Serial.available() );// espera o usuário dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em número
  
  
  //processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 360;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
  
  //saída
  Serial.println("idade em meses: " + String(idadeMeses));//imprime o texto
  Serial.println("idade em dias: " + String(idadeDias));//imprime o texto
  Serial.println("idade em horas: " + String(idadeHoras));//imprime o texto
  Serial.println("idade em minutos: " + String(idadeMinutos));//imprime o texto
  
  
  
  
  delay(1000);
}