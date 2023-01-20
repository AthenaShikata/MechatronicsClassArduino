#include <Servo.h>

Servo blood;
Servo burnt;
Servo shrunk;

const int sensor = 4;
const int button = 5;
const int led1 = 8;
const int led2 = 7;

float angle1 = 80;
float angle2 = 80;
float angle3 = 80;
long random1 = 0;
long random2 = 0;
long random3 = 0;

int detect = 0;
int state = 0;

void setup() {
  Serial.begin(9600);
  blood.attach(3);
  burnt.attach(10);
  shrunk.attach(9);
  pinMode(sensor, INPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() {
  random1 = random(-20, 21);
  random2 = random(-20, 21);
  random3 = random(-20, 21);
  angle1 = (40 * (sin((2 * (millis() / 1000 + 0) - 10))) + 30 * (cos((.6 * (millis() / 1000 + 0) - 10))) + 90 + random1);
  angle2 = (40 * (sin((2 * (millis() / 1000 - 2) - 10))) + 30 * (cos((.6 * (millis() / 1000 - 2) - 10))) + 90 + random2);
  angle3 = (40 * (sin((2 * (millis() / 1000 + 2) - 10))) + 30 * (cos((.6 * (millis() / 1000 + 2) - 10))) + 90 + random3);
  blood.write(angle1);
  burnt.write(angle2);
  shrunk.write(angle3);
  Serial.print(angle1);
  Serial.print("    ");
  Serial.print(angle2);
  Serial.print("    ");
  Serial.print(angle3);
  Serial.print("    ");
  detect = digitalRead(sensor);
  digitalWrite(led1, detect);
  Serial.print(detect);
  Serial.print("    ");
  if (detect == 1) {
    if (state == 0) {
      state = 1;
      blood.write(90);
      burnt.write(90);
      shrunk.write(90);
      delay(5500);
      detect = 0;
    }
  } else {
    if (state == 1) {
      state = 0;
    }
  }
  digitalWrite(led2, state);
  Serial.println(state);
}