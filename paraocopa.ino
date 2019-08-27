//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
#include <VarSpeedServo.h>
 
//Define os pinos para o trigger e echo
#define pino_trigger 12
#define pino_echo 10

int ang_a = 0;
int ang_b = 0;
int ang_c = 0;

VarSpeedServo arm_a; // pino 2 = garra
VarSpeedServo arm_b; // pino 4 = base central
VarSpeedServo arm_c; // pino 8 = cotovelo base
 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{
  arm_a.attach(2, 1, 180);
  arm_b.attach(4, 1, 180);
  arm_c.attach(8, 1, 180);

  posicaoInicial();
  
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}


void posicaoInicial() {
   //posição inicial

 arm_a.slowmove(150, 100);
 ang_a = arm_a.read();
 delay(100);

 arm_b.slowmove(180, 100);
 ang_b = arm_b.read();
 delay(100);

 arm_c.slowmove(50, 100);
 ang_c = arm_c.read();
 delay(100);

 delay(2000);
}

void mover(){

 // fecha a garra

 delay(2000);
 
 arm_a.slowmove(100, 100);
 ang_a = arm_a.read();
 delay(100);

 //delay(2000);

 // posição para soltar objeto

 arm_b.slowmove(45, 100);
 ang_b = arm_b.read();
 delay(100);

 arm_c.slowmove(150, 100);
 ang_c = arm_c.read();
 delay(100);

 delay(2000);

 // abaixa para soltar o objeto

 arm_c.slowmove(60, 100);
 ang_c = arm_c.read();
 delay(100);

 delay(2000);

 // abre a garra

 arm_a.slowmove(150, 100);
 ang_a = arm_a.read();
 delay(100);

 delay(2000);

  // sobe para voltar a posição inicial

 arm_c.slowmove(120, 100);
 ang_c = arm_c.read();
 delay(100);

 delay(2000);

 // gira até a posição inicial

 arm_b.slowmove(180, 100);
 ang_b = arm_b.read();
 delay(100);

 //posição inicial

 posicaoInicial();

 delay(2000);
}
 
void loop()
{
  //Le as informacoes do sensor, em cm e pol
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm:");
  Serial.println(cmMsec);
  delay(100);

  if (cmMsec < 7 and cmMsec > 2){
    Serial.println("Foi");
    mover();
  }
}
