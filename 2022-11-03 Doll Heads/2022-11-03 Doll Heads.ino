#include <Servo.h>

Servo blood;
Servo burnt;
Servo shrunk;

const int sensor = 4;

float angle = 90;
float x = 0;
int detect = 0;

void setup() {
  Serial.begin (9600);
  blood.attach (3);
  burnt.attach (10);
  shrunk.attach (9);
}

void loop() {
  x = millis();
  angle = (35*(sin(millis()/10000)) + 5*(cos(millis()/1000)) + 90);
  blood.write (angle);
  burnt.write (angle);
  shrunk.write (angle);
  Serial.print(angle);
  Serial.print("   ");
  Serial.println (x);
  if (detect == 1) {
    blood.write (90);
    burnt.write (90);
    shrunk.write (90);
    delay(10000);
  }
}