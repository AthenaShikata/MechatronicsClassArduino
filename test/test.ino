#include <Servo.h>

Servo spinny;

void setup() {
  spinny.attach (3);
  Serial.begin(9600);;
}

void loop() {
  int x = millis()/1000;
  int angle = ((10*sin(x))+90);
  spinny.write(angle);
}
