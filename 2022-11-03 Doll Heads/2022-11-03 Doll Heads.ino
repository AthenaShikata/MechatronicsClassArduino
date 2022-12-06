#include <Servo.h>

Servo blood;
Servo burnt;
Servo shrunk;

const int sensor = 4;

int angle = 90;
int stare = 90;
int time = 0;

void setup() {
  Serial.begin (9600);
  blood.attach (3);
  burnt.attach (10);
  shrunk.attach (9);
}

void loop() {
  time = millis()/1000;
  angle = 30((sin(.1*time))^2)+.5(cos(.5*time))^2)+70;
  blood.write (angle);
  burnt.write (angle);
  shrunk.write (angle);
  Serial.println(angle);
}
