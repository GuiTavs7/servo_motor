// IMPORTAÇÕES DE BIBLIOTECAS

#include <Servo.h> // Biblioteca do Servo

// ----------------------------------------------------------------------------------------------------------------------------------

// DECLARAÇÕES DE VARIÁVEIS E OBJETOS

Servo meuservo; // Objeto Servo
int ang = 0;    // Variável Ângulo

// ----------------------------------------------------------------------------------------------------------------------------------

// VOID SETUP - CONFIGURAÇÕES INICIAIS DO PROGRAMA - ATRIBUIÇÕES DE PINOS

void setup() {
  meuservo.attach(7);  // Pino usado para conectar a base do servo
}

// ----------------------------------------------------------------------------------------------------------------------------------

// VOID LOOP - LOOP PRINCIPAL DO PROGRAMA

void loop() {

  for (ang = 0; ang <= 180; ang += 1) { // Vai de 0º até 180º (De 1 em 1 grau - Aumente essa variação para aumentar a velocidade)
 
    meuservo.write(ang);             // Comando que envia o sinal para o servo rotacionar
    delay(15);                       //  Espera 15ms 
  }

  for (ang = 180; ang >= 0; ang -= 1) { // Vai de 180º até 0º (De 1 em 1 grau - Aumente essa variação para aumentar a velocidade)

    meuservo.write(ang);             // Comando que envia o sinal para o servo rotacionar
    delay(15);                       // Espera 15ms 
  }

} // Fim da função LOOP