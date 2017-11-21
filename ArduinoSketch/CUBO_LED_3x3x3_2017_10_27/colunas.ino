void teste_coluna1(){
desliga_todos();

for (int x = 0; x < 3; x++)
{
  if (x ==0){
          digitalWrite(A0, HIGH);
          for (int i=2; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A0, LOW);
  }

  if (x ==1){
          digitalWrite(A1, HIGH);
          for (int i=2; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A1, LOW);
  }

  if (x ==2){
          digitalWrite(A2, HIGH);
          for (int i=2; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A2, LOW);
  }
}
}





void teste_coluna2(){
desliga_todos();


for (int x = 0; x < 3; x++)
{
  if (x ==0){
          digitalWrite(A0, HIGH);
          for (int i=3; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A0, LOW);
  }

  if (x ==1){
          digitalWrite(A1, HIGH);
          for (int i=3; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A1, LOW);
  }

  if (x ==2){
          digitalWrite(A2, HIGH);
          for (int i=3; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A2, LOW);
  }


}
}


void teste_coluna3(){
desliga_todos();


for (int x = 0; x < 3; x++)
{
  if (x ==0){
          digitalWrite(A0, HIGH);
          for (int i=4; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A0, LOW);
  }

  if (x ==1){
          digitalWrite(A1, HIGH);
          for (int i=4; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A1, LOW);
  }

  if (x ==2){
          digitalWrite(A2, HIGH);
          for (int i=4; i<11; i= i+3)
          {
            digitalWrite(i, LOW);
            delay(tempo);
            digitalWrite(i, HIGH);
            delay(tempo);
          }
          digitalWrite(A2, LOW);
  }


}
}
