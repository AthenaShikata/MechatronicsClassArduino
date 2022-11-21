#include <Servo.h>

Servo blood;
Servo burnt;
Servo shrunk;

const int sensor;

int angle = 90;

void setup() {
  Serial.begin (9600);
  blood.attach (3);
  burnt.attach (10);
  shrunk.attach (9);
}

void loop() {
  blood.write (angle);
  burnt.write (angle);
  shrunk.write (angle);
}
