// C++ code
//

void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
     for(int i = 1; i<= qtdPontos; i++)
     {
       Serial.print(".");
       delay(tempo);
     }
}


void desenhaCabecalho()
{
    Serial.println(" ");
    Serial.println(" "); 
    Serial.println(" --- PROGRAMA JOGOS DE DADOS ---"); 
    Serial.println(" "); 
    Serial.println(" "); 
}


void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
   
  
  
   desenhaCabecalho();

    Serial.println("Quantas vezes voce quer jogar?");
    while(! Serial.available());
    int qtdRodadas = Serial.parseInt();

    int vetpalpites[qtdRodadas];
    int vetResultados[qtdRodadas]; 

    for(int r = 0; r < qtdRodadas; r++)
  {
     Serial.println("Digite um palpite de 1 a 6"); 
     Serial.println(); 
     while(! Serial.available());
     int palpite = Serial.parseInt();


     int numeroSorteado = random(1, 7);
      
     Serial.print("jogando dados ");
   
     desenhaPontinhos();

     Serial.println("seu palpite: " + String(palpite));
     Serial.println("numero do dado: " + String(numeroSorteado)); 
     Serial.println();
      
     vetpalpites[r] = palpite; 
     vetResultados[r] = numeroSorteado; 
      

     if(palpite == numeroSorteado){
       Serial.println("parabens voce acertou");
     }else{  
       Serial.println("que pena, tente outra vez");
  }
    
}//fim do for
  
  Serial.println();
  Serial.println("ESTATISTICAS DO JOGO");
  Serial.println();

  for(int i = 0; i < qtdRodadas; i++){
    Serial.println("rodada " + String(i + 1) + ":");
    Serial.println("  palpite:  " + String(vetpalpites[i]));
    Serial.println("  dados:  " + String(vetResultados[i]));
    
    if(vetpalpites[i] == vetResultados[i]){
       Serial.println("ARRASOUU");
     }else{  
       Serial.println("FLOPOU");
  }
    
    Serial.println("-------------------------");
    Serial.println();

 }

  



  delay(1000);
}