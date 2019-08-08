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
 arm_g.attach(8, 1, 180);
}
 
void loop() {


/*
	Posição inicial - bloco 1
*/

 arm_a.slowmove(10, 20);
 delay(2000);
 arm_b.slowmove(10, 20);
 delay(2000);
 arm_c.slowmove(10, 20);
 delay(2000);
 arm_d.slowmove(10, 20);
 delay(2000);
 arm_e.slowmove(10, 20);
 delay(2000);
 arm_f.slowmove(10, 20);
 delay(2000);
 arm_g.slowmove(10, 20);
 delay(2000);

 /*
	Posição - bloco 2


 arm_a.slowmove(0, 45);
 delay(30);
 arm_b.slowmove(0, 45);
 delay(30);
 arm_c.slowmove(0, 10);
 delay(30);
 arm_d.slowmove(0, 20);
 delay(30);
 arm_e.slowmove(0, 45);
 delay(30);
 arm_f.slowmove(0, 45);
 delay(30);
 arm_g.slowmove(0, 10);
 delay(30);

 /*
	Posição inicial - bloco 3


 arm_a.slowmove(0, 45);
 delay(30);
 arm_b.slowmove(0, 45);
 delay(30);
 arm_c.slowmove(0, 10);
 delay(30);
 arm_d.slowmove(0, 20);
 delay(30);
 arm_e.slowmove(0, 45);
 delay(30);
 arm_f.slowmove(0, 45);
 delay(30);
 arm_g.slowmove(0, 10);
 delay(30);

*/

}
