#include <Servo.h>

Servo servo;

int angle_down = 75;
int angle_up = 90;

int touch_delay = 150;
int perfect_delay = 600;

void setup() {
  servo.attach(8);
  servo.write(angle_up);
  delay(3000);
}

void loop() {

  //Rest Steps
  servo.write(angle_down);
  delay(touch_delay);
  servo.write(angle_up);
  delay(perfect_delay);
}

