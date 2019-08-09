#include <VarSpeedServo.h>

/*
  x.attach(pino, angulominimo, algumomaximo)
  x.slowmove (angulo, velocidade)
*/


VarSpeedServo arm_a;
VarSpeedServo arm_b; 
VarSpeedServo arm_c;
VarSpeedServo arm_d;
VarSpeedServo arm_e;
VarSpeedServo arm_f;
VarSpeedServo arm_g;

void setup() {
 arm_a.attach(2, 1, 180);
 arm_b.attach(3, 1, 180);
 arm_c.attach(4, 1, 180);
 arm_d.attach(5, 1, 180);
 arm_e.attach(6, 1, 180);
 arm_f.attach(7, 1, 180);
 arm_g.attach(8, 1, 180); //esse pino não está aguentando
}
 
void loop() {


/*
  Posição inicial - bloco 1
*/
/*
 arm_a.slowmove(90, 10);
 delay(2000);
 
 arm_b.slowmove(50, 20);
 delay(200);
 arm_c.slowmove(50, 20);
 delay(200);
 
 arm_d.slowmove(50, 20);
 delay(200);
 arm_e.slowmove(50, 20);
 delay(200);
 arm_f.slowmove(50, 20);
 delay(200);
 arm_g.slowmove(50, 20);
 delay(200);
*/
 arm_a.slowmove(150, 10);
 delay(200);
 /*
 arm_b.slowmove(80, 20);
 delay(200);
 arm_c.slowmove(80, 20);
 delay(200);
 arm_d.slowmove(80, 20);
 delay(200);
 arm_e.slowmove(80, 20);
 delay(200);
 arm_f.slowmove(80, 20);
 delay(200);
 arm_g.slowmove(80, 20);
 delay(200);

*/

}
