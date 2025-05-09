// C++ code
//variaveis

String appTempo = "sol";

void setup()
{//crregar as configuracoes iniciais
  Serial.begin(9600);
}

void loop()
{// rodar o progama eternamente ate que voce desligue o arduino
  
  if( appTempo == "chuva"){
    Serial.println("hoje vai chover, por favor");
    Serial.println("pegue o quarda-chuva");
  }else {
  Serial.println("hoje esta ensolarado, bom passeio ");
  }

  
  Serial.println("saindo de casa");
  delay(10000);
}