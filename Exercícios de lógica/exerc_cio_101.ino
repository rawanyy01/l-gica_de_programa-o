// C++ code
//

float precoCompra, precoVenda, percentual;
  
void setup()
{
Serial.begin(9600);
}
void loop()
{
  Serial.println("digite quanto voce pagou no produto");
  while( !Serial.available());
  precoCompra = Serial.parseFloat();
  
  Serial.println("qual o percentual a ser aplicado na venda do produto? ");
  while( !Serial.available());
  percentual = Serial.parseFloat();
  
  float precoVenda = precoCompra + (precoCompra * percentual);
  
  Serial.println("preco da venda: " + String(precoVenda) );
  
  
  if(percentual < 0.50){
  Serial.println("O preco de Venda sera de: " + String(precoVenda));
  Serial.println("o produto sera vendido com uma margem muito pequena de lucro");
  }
  
  else{
      Serial.println("O preco de Venda sera de: " + String(precoVenda));
    Serial.println("o produto sera vendido com uma margem de lucro boa");
  }
  
} 
