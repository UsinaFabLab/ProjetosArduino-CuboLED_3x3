
int tempo = 1;
int tempo_linhas = 500;


void setup() {


  pinMode(2, OUTPUT); // negativos
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // colunas
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);

  desliga_todos();
}

void loop() {

//teste_coluna1();
//delay(500);
//teste_coluna2();
//delay(500);
//teste_coluna3();
//delay(500);
//
//teste_linhas();
//delay(500);
//
//teste_padrao1();
//delay(1000);

teste_padrao2();
}


void desliga_todos() {

  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);

  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
    
}



