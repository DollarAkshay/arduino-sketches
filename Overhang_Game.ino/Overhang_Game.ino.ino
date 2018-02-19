#include <Servo.h>
#include <math.h>

Servo servo;

int angle_down = 60;
int angle_up = 80;

int block = 0;
int tower_height = 64;
int touch_delay = 100;
int perfect_delay = 1780;
int block_time = 500;     

void setup() {
  servo.attach(8);
  servo.write(angle_up);
  delay(5000);

  // Game Start
  servo.write(angle_down);
  delay(touch_delay);

  // First Block
  servo.write(angle_up);
  delay(1000);
  servo.write(angle_down);
  delay(touch_delay);
  block++;
  
}

void loop() {

  // Rest of the blocks
  servo.write(angle_up);
  int wait_delay = perfect_delay - block_time/ (2 * max(1, tower_height-block-1) );
  delay(perfect_delay);
  servo.write(angle_down);
  delay(touch_delay);
  block++;
}

