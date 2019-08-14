#include <VarSpeedServo.h>

/*
  x.attach(pino, angulominimo, algumomaximo)
  x.slowmove (angulo, velocidade)
*/


VarSpeedServo arm_a; // pino 2 = garra
VarSpeedServo arm_b; // pino 3 = base direita
VarSpeedServo arm_c; // pino 4 = base central
VarSpeedServo arm_d; // pino 5 = cotovelo base
VarSpeedServo arm_e; // pino 6 = base esquerda
VarSpeedServo arm_f; // pino 7 = punho
VarSpeedServo arm_g; // pino 8 = cotovelo garra

void setup() {
 Serial.begin(9600);
  
 arm_a.attach(2, 1, 180);
 arm_b.attach(3, 1, 180);
 arm_c.attach(4, 1, 180);
 arm_d.attach(5, 1, 180);
 arm_e.attach(6, 1, 180);
 arm_f.attach(7, 1, 180);
 arm_g.attach(8, 1, 180);
}

int ang_c = 0;
 
void loop() {

 arm_c.slowmove(45, 40);
 
 ang_c = arm_c.read();
 
 Serial.print(ang_c);

 Serial.print(" | ");
 
 delay(2000);

 arm_c.slowmove(180, 40);

 ang_c = arm_c.read();
 
 Serial.print(ang_c);
 
 Serial.print(" | ");

  delay(2000);

}
