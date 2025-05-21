float telefone = 7070-7070; 
String endereco = "Rua Niterói São Caetano sp";

 

void setup()
{
 Serial.begin(9600);
  
 Serial.println("ola! seja bem vindo ao nosso sistema");
 Serial.println(" 1 - ver telefone");
 Serial.println(" 2 - ver endereco");
  
  switch{
  
       case 1:
           float telefone;
           Serial.println(telefone);
   			break;
   		
      	case 2:
           String endereco;
           Serial.println(endereco);
   			break;
  
  
         default:
       Serial.println("sair ");
      
    }
}

void loop()
{
 
  
}

