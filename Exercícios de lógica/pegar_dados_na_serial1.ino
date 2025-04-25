// C++ code
//Variávis
String nome = "";
String sobrenome = "";
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
   //pedir os dados para o usuário
   Serial.println("Qual e o seu nome?");// mostra uma mensagemna tela(via serial)
   while( ! Serial.available() );//espera o usuário digitar e dar um <Enter>
   nome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
   Serial.println("Qual e o seu sobrenome?");// mostra uma mensagemna tela(via serial)
   while( ! Serial.available() );//espera o usuário digitar e dar um <Enter>
   sobrenome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
   Serial.println("Qual e a sua idade?");// mostra uma mensagemna tela(via serial)
   while( ! Serial.available() );//espera o usuário digitar e dar um <Enter>
   idade = Serial.parseInt();//guarda o texto que o usuário escreveu para inteiro, antes de guardar na variável
   
   
   //exibir os dados na serial
  Serial.println("nome informado: " + nome);
  Serial.println("sobrenome informado: " + sobrenome);
  Serial.println("idade informado: " + String(idade));//converta O número para texto para poder juntar todo o texto
  Serial.println();//esceva uma linha vazia
}