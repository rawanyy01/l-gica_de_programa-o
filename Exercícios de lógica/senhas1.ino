#include <Servo.h>
Servo motor;
const int buzzer = 4;
const int ledVermelho = 3;
const int ledVerde = 2;
const int senhaCorreta = 123;
int senhaDigitada;

void setup()
{
  motor.write(90);
  Serial.begin(9600);
  motor.attach(12);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
 
  Serial.println("Advinhe a senha para entrar no sistema");
  while(!Serial.available());
  senhaDigitada = Serial.parseInt();
  
  if(senhaCorreta == senhaDigitada){
    digitalWrite(ledVerde, HIGH);
    delay(700);
    digitalWrite(ledVerde, LOW);
  } else {
    digitalWrite(buzzer, HIGH);
    digitalWrite(ledVermelho, HIGH);
    delay(700);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
} 
    delay(3000);
}
