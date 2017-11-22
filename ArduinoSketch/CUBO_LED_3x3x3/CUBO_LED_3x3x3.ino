
int pausa = 500;        // pausa entre cada tipo de animação

// variáveis utilizadas nas funções animação:
int tempo = 1;
int tempo_linhas = 500;

void setup() {

  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  // colunas
  pinMode(A0, OUTPUT); // deve ser ligado a um resistor de 220 ohms
  pinMode(A1, OUTPUT); // deve ser ligado a um resistor de 220 ohms
  pinMode(A2, OUTPUT); // deve ser ligado a um resistor de 220 ohms

  desliga_todos();    // faz com que todos os leds iniciem no modo desligado
  
} // fim do setup


void loop() {

  // funções definidas nos outros arquivos (ou abas na IDE  do Arduino)
  teste_coluna1();
  delay(pausa);
  
  teste_coluna2();
  delay(pausa);
  
  teste_coluna3();
  delay(pausa);

  teste_linhas();
  delay(pausa);

  teste_padrao1();
  delay(pausa);

  teste_padrao2();
  delay(pausa);
  
} // fim do loop

// a função abaixo desliga todos os LEDs ao mesmo tempo
// e é utilizada dentro das outras funções.
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
