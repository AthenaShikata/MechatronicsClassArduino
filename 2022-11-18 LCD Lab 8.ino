#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int trigPin = 11;
const int echoPin = 12;
const int led = 2;

long duration;
int distance;

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  lcd.setCursor(0, 0);
  lcd.print ("Distance = ");
  lcd.setCursor(11, 0);
  lcd.print (distance);
  lcd.setCursor(0, 1);
  lcd.print ("Time = ");
  lcd.setCursor(7, 1);
  lcd.print (millis());
}
