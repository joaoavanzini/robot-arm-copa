#include <VarSpeedServo.h>

const int trigPin = 6;
const int echoPin = 5;

long duration;
int distance;


/*
  x.attach(pino, angulominimo, algumomaximo)
  x.slowmove (angulo, velocidade)
*/


VarSpeedServo arm_a; // pino 2 = garra
VarSpeedServo arm_b; // pino 4 = base central
VarSpeedServo arm_c; // pino 5 = cotovelo base

void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
  
 arm_a.attach(2, 1, 180);
 arm_b.attach(4, 1, 180);
 arm_c.attach(8, 1, 180);
}

int ang_a = 0;
int ang_b = 0;
int ang_c = 0;

void mover(){
  //posição inicial

 arm_a.slowmove(150, 100);
 ang_a = arm_a.read();
 Serial.print(ang_a);
 Serial.print(" a = ");
 delay(100);

 arm_b.slowmove(180, 100);
 ang_b = arm_b.read();
 Serial.print(ang_b);
 Serial.print(" b = ");
 delay(100);

 arm_c.slowmove(35, 100);
 ang_c = arm_c.read();
 Serial.print(ang_c);
 Serial.print(" c = ");
 delay(100);

 delay(2000);

 // fecha a garra
 
 arm_a.slowmove(100, 100);
 ang_a = arm_a.read();
 Serial.print(ang_a);
 Serial.print(" a = ");
 delay(100);

 delay(2000);

 // posição para soltar objeto

 arm_b.slowmove(45, 100);
 ang_b = arm_b.read();
 Serial.print(ang_b);
 Serial.print(" b = ");
 delay(100);

 arm_c.slowmove(150, 100);
 ang_c = arm_c.read();
 Serial.print(ang_c);
 Serial.print(" c = ");
 delay(100);

 delay(2000);

 // abaixa para soltar o objeto

 arm_c.slowmove(60, 100);
 ang_c = arm_c.read();
 Serial.print(ang_c);
 Serial.print(" c = ");
 delay(100);

 delay(2000);

 // abre a garra

 arm_a.slowmove(150, 100);
 ang_a = arm_a.read();
 Serial.print(ang_a);
 Serial.print(" a = ");
 delay(100);

 delay(2000);

  // sobe para voltar a posição inicial

 arm_c.slowmove(120, 100);
 ang_c = arm_c.read();
 Serial.print(ang_c);
 Serial.print(" c = ");
 delay(100);

 delay(2000);

 // gira até a posição inicial

 arm_b.slowmove(180, 100);
 ang_b = arm_b.read();
 Serial.print(ang_b);
 Serial.print(" b = ");
 delay(100);

 delay(2000);
}
 
void loop() {
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance= duration*0.034/2;

  if (distance < 10){
    mover();
  }
 
}
