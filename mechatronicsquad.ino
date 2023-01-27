// #include <Arduino.h>
#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;
Servo servo07;
Servo servo08;
Servo servo09;
Servo servo10;
Servo servo11;
Servo servo12;

int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos, servo7Pos, servo8Pos, servo9Pos, servo10Pos, servo11Pos, servo12Pos;
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos, servo7PPos, servo8PPos, servo9PPos, servo10PPos, servo11PPos, servo12PPos;
int speedDelay = 20;

// move servo at a designated speed
int moveServo(Servo servo, int& pos, int& ppos) {

  if (ppos > pos) {
    for ( int i = ppos; i >= pos; i--) {
      servo.write(i);
      delay(speedDelay);
    }
  }

  if (ppos < pos) {
    for ( int i = ppos; i <= pos; i++) {
      servo.write(i);
      delay(speedDelay);
    }
  }

  ppos = pos;
  return 0;
}

void setup() {
  
  // initialize servos
  servo01.attach();
  servo02.attach();
  servo03.attach();
  servo04.attach();
  servo05.attach();
  servo06.attach();
  servo07.attach();
  servo08.attach();
  servo09.attach();
  servo10.attach();
  servo11.attach();
  servo12.attach();
  delay(20);

  // initial positions
  servo1PPos = 90;
  servo01.write(servo1PPos);
  servo2PPos = 90;
  servo02.write(servo2PPos);
  servo3PPos = 90;
  servo03.write(servo3PPos);
  servo4PPos = 90;
  servo04.write(servo4PPos);
  servo5PPos = 90;
  servo05.write(servo5PPos);
  servo6PPos = 90;
  servo06.write(servo6PPos);
  servo7PPos = 90;
  servo07.write(servo7PPos);
  servo8PPos = 90;
  servo08.write(servo8PPos);
  servo9PPos = 90;
  servo09.write(servo9PPos);
  servo10PPos = 90;
  servo10.write(servo10PPos);
  servo11PPos = 90;
  servo11.write(servo11PPos);
  servo12PPos = 90;
  servo12.write(servo12PPos);
  
}

void loop() {
  
  
  
}
