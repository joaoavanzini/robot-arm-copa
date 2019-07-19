 #include <VarSpeedServo.h> //Inclusão da biblioteca VarSpeedServo.h
 
//OOP - Creating each object for movement  
VarSpeedServo arm_up;
VarSpeedServo arm_front; 
VarSpeedServo arm_claw;
VarSpeedServo arm_body;
 

//Sets the ports on which the servo motor is connected to the Arduino
void setup() {
 arm_up.attach(9, 1, 180);
 arm_front.attach(10, 1, 180);
 arm_claw.attach(11, 1, 180);
 arm_body.attach(8, 1, 180);
}
 
//Every part of movement, using all these values​that are here:
void loop() {
 arm_up.slowmove(0, 45);

 delay(30);
 
 arm_front.slowmove(0, 45);

 delay(30);
  
 arm_claw.slowmove(0, 10);

 delay(30);
 
 arm_body.slowmove(0, 20);

 delay(30);

 arm_up.slowmove(180, 10);

 delay(30);
 
 arm_front.slowmove(180, 10);

 delay(30);
  
 arm_claw.slowmove(-90, 10);

 delay(30);
 
 arm_body.slowmove(90, 10);

 delay(30);

 arm_up.slowmove(0, 45);

 delay(30);
 
 arm_front.slowmove(0, 45);

 delay(30);
  
 arm_claw.slowmove(0, 10);

 delay(30);
 
 arm_body.slowmove(0, 20);

 delay(30);

 arm_up.slowmove(90, 10);

 delay(600);
 
 arm_front.slowmove(90, 10);

 delay(600);

 arm_claw.slowmove(180, 10);

 delay(3000);

 arm_claw.slowmove(0, 10);

 delay(1000);
  
 arm_body.slowmove(180, 10);

 delay(600);
 

}
