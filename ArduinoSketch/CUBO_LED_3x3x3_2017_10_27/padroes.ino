void teste_padrao1(){
desliga_todos();



  for (int x = 0; x < 3; x++)
  {

      if(x==0){
        digitalWrite(A0, HIGH);

            for (int k=2; k<11; k=k+2)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A0, LOW);
      }

      
      if(x==1){
        digitalWrite(A1, HIGH);

            for (int k=2; k<11; k=k+2)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A1, LOW);
      }

      
      if(x==2){
        digitalWrite(A2, HIGH);

            for (int k=2; k<11; k=k+2)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A2, LOW);
      }
            
  
  }


}





void teste_padrao2(){
desliga_todos();



  for (int x = 0; x < 3; x++)
  {

      if(x==0){
        digitalWrite(A0, HIGH);

            for (int k=2; k<11; k=k+1)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A0, LOW);
      }

      
      if(x==1){
        digitalWrite(A1, HIGH);

            for (int k=2; k<11; k=k+2)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A1, LOW);
      }

      
      if(x==2){
        digitalWrite(A2, HIGH);

            for (int k=2; k<11; k=k+3)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A2, LOW);
      }
            
  
  }


}
