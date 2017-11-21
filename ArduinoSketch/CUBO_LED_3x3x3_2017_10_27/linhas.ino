void teste_linhas(){
desliga_todos();



  for (int x = 0; x < 3; x++)
  {

      if(x==0){
        digitalWrite(A0, HIGH);

            for (int k=2; k<11; k++)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A0, LOW);
            delay(tempo_linhas);
      }

      
      if(x==1){
        digitalWrite(A1, HIGH);

            for (int k=2; k<11; k++)
            {
              
              digitalWrite(k, LOW);
              delay(tempo);
              digitalWrite(k, HIGH);
              delay(tempo);
            }
            digitalWrite(A1, LOW);
            delay(tempo_linhas);
      }

      
      if(x==2){
        digitalWrite(A2, HIGH);

            for (int k=2; k<11; k++)
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
