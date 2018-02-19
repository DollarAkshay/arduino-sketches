#include <Servo.h>

Servo servo;

int angle_down = 70;
int angle_up = 90;
int touch_delay = 200;
int perfect_delay = 600;

void setup() {
  servo.attach(8);
  servo.write(angle_up);
  delay(5000);

  // Start Game
  servo.write(angle_down);
  delay(touch_delay);
  servo.write(angle_up);
  delay(750);
}

void loop() {
  servo.write(angle_down);
  delay(touch_delay);
  servo.write(angle_up);
  delay(perfect_delay);
}

