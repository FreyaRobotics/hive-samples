#include <Servo.h>

Servo servo_x_axis;  // create a servo object
int SERVO_X_PIN = 9; // number of pin on the board where to attach servo, constants usually are CAPITALL_LETTERS
int servo_x_initial_pos = 90; // degrees, center between 0 and 180 degrees
int servo_x_pos = servo_x_initial_pos; // current position of a servo that is going to be updated


void setup() {
  // initialize serial:
  Serial.begin(115200);
  servo_x_axis.attach(SERVO_X_PIN); // 
  servo_x_axis.write(servo_x_initial_pos);
  delay(100);
}

void loop() {
  // add some other routine here if you want
}

void do_something()
{
  // just rotate servo back and forth 
      for(servo_x_pos; servo_x_pos < 180 ; servo_x_pos++)
      {
        servo_x_axis.write(servo_x_pos); // start PWM at specified interval
        delay(16); // wait for 16ms
      }
      for(servo_x_pos; 0 < servo_x_pos ; servo_x_pos--)
      {
        servo_x_axis.write(servo_x_pos);
        delay(16); // wait for 16ms
      }
}

void do_something_else()
{
  // also just move servo but faster and not that far
  for(int i = 0; i < 8; i++)
  {
      servo_x_pos += 10;
      servo_x_axis.write(servo_x_pos);
      delay(4); // wait for 4 ms
  }
  for(int i = 0; i < 8; i++)
  {
      servo_x_pos -= 10;
      servo_x_axis.write(servo_x_pos);
      delay(4);
  }
}

void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    Serial.println(inChar);

    if (inChar == 'j') {
      do_something(); // this function is called when board receives small letter j
    }

    if (inChar == 'X') {
      do_something_else(); // this function is called when the board receives capial X
    }
  }
}
