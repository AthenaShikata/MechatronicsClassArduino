#include <Servo.h>

const int PR = A1;

Servo launcher;

int val = 0;

void setup() {
  Serial.begin (9600);
  launcher.attach (9); 
  launcher.write (0);
  pinMode (PR, INPUT);
}

void loop() {
  val = analogRead (PR);
  Serial.println (val);
  if (val > 115) {
    Serial.println ("LET THE CARNAGE COMMENCE");
    delay(1000);
    launcher.write (180);
    delay (1000);
    launcher.write (0);
  }
}

