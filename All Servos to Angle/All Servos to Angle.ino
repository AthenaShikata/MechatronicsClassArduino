#include <Servo.h>

Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;
Servo s9;
Servo s10;
Servo s11;
Servo s12;

int angle = 90;

void setup() {
  Serial.begin (9600);
  s2.attach(2); 
  s3.attach(3);
  s4.attach(4);
  s5.attach(5);
  s6.attach(6);
  s7.attach(7);
  s8.attach(8);
  s9.attach(9);
  s10.attach(10);
  s11.attach(11);
  s12.attach(12);
}

void loop() {
  s2.write(angle);
  s3.write(angle);
  s4.write(angle);
  s5.write(angle);
  s6.write(angle);
  s7.write(angle);
  s8.write(angle);
  s9.write(angle);
  s10.write(angle);
  s11.write(angle);
  s12.write(angle);
}

