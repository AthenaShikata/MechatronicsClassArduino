#include <Servo.h>

Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;

void setup() {
  Serial.begin (9600);
  s2.attach(2); 
  s3.attach(3);
  s4.attach(4);
  s5.attach(5);
  s6.attach(6);
  s7.attach(7);
  s8.attach(8);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  s5.write(90);
  s6.write(90);
  s7.write(90);
  s8.write(90);
}

void loop() {
}

