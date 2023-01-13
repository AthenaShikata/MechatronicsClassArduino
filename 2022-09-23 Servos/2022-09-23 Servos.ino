#include <Servo.h>
const int pot = A5;

int value = 0;
int angle = 0;

Servo spinny;

void setup() {
  Serial.begin (9600);
  pinMode (pot, INPUT);
  spinny.attach (2); 
  spinny.write (90);
  delay (1000);
}

void loop() {
  value = analogRead (pot) ;
  angle = value/5.688889;
  Serial.print (value);
  Serial.print ("    ");
  Serial.println (angle);
  spinny.write (angle);
}
