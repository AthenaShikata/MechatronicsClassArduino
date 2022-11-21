const int LC1 = 2;
const int LC2 = 3;
const int LSC = 12;
const int pot = A3;

int motorSpeed = 0;

void setup() {
  Serial.begin(9600);
  pinMode (LC1, OUTPUT);
  pinMode (LC2, OUTPUT);
  pinMode (LSC, OUTPUT);
  motorSpeed = 0;
  analogWrite (LSC, motorSpeed);
  digitalWrite (LC1, LOW);
  digitalWrite (LC2, LOW);
  delay(1000);
}

void loop() {
  motorSpeed = analogRead (pot);
  Serial.println (motorSpeed);
  analogWrite (LSC, motorSpeed);
  digitalWrite (LC1, LOW);
  digitalWrite (LC2, HIGH);
}