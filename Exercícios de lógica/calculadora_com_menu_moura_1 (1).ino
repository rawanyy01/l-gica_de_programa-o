int escolhaDaOperacao;
float resultado;



  float somar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param + numero2Param;
  return resultado;
  //Serial.println("o resultado da soma foi: " + String(resultado));
}


  float dividir(float numero1Param, float numero2Param = 0){
  resultado = numero1Param / numero2Param;
  return resultado;
  //Serial.println("o resultado da soma foi: " + String(resultado));
}

  float subtrair(float numero1Param, float numero2Param = 0){
  resultado = numero1Param - numero2Param;
  return resultado;
  //Serial.println("o resultado da soma foi: " + String(resultado));
}


  float multiplicar(float numero1Param, float numero2Param = 0){
  resultado = numero1Param * numero2Param;
  return resultado;
  //Serial.println("o resultado da soma foi: " + String(resultado));
}


void setup()
{
  Serial.begin(9600);
  
  int contador = 0;
  float numero1;
  float numero2;
  
  do{
    Serial.println("Bem-vindo(a)a calculadora inteligente :)\n");
    Serial.println("escolha uma das operacoes: ");
    Serial.println("1 - somar ");
    Serial.println("2 - dividir ");
    Serial.println("3 - subtrair ");
    Serial.println("4 - multiplicar ");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();
    
    
    
   
   Serial.println("para conseguirmos fazer a operacao matematica, precisamos que voce digite dois numeros ");
   Serial.println("digite o primeiro numero: ");
   while(!Serial.available()){}
   numero1 = Serial.parseFloat();
    
   Serial.println("agora, digite o segundo numero: ");
   while(!Serial.available()){}
   numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){
        case 1:	
          //somar(numero1, numero2);
          //somar(1, 3);
          float retornofuncaoSomar;
          retornofuncaoSomar = somar(numero1, numero2);
          Serial.println(retornofuncaoSomar);
   			break;
    
     	 case 2:
           float retornofuncaoDividir;
           retornofuncaoDividir = dividir(numero1, numero2);
      	   Serial.println(retornofuncaoDividir);
   			break;
   		
      	 case 3:
           float retornofuncaoSubtrair;
           retornofuncaoSubtrair = subtrair(numero1, numero2);
           Serial.println(retornofuncaoSubtrair);
   			break;
      
 		 case 4: 
           float retornofuncaoMultiplicar;
           retornofuncaoMultiplicar = multiplicar(numero1, numero2);
           Serial.println(retornofuncaoMultiplicar);
   			break;
      
      default:
       Serial.println("opcao invalida! escolha uma opcao de 1 a 4. ");
      
    }
    
    
     Serial.println("voce deseja volatr ao menu? (sim ou nao) ");
     while(!Serial.available()){}
    
    
    if(Serial.readString() == "sim"){
     contador = 1;
    }
    else{
      contador = 0;
      Serial.println("ate breve");
      Serial.println("caso queira voltar ao menu, reinicie o programa");
    
    }
    

    
  }
  while(contador != 0);
  
  
 }

void loop()
{
  //sem instruções 
}