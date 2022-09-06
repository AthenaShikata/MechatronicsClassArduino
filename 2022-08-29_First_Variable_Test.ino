const int redLED = 1;
int greenLED = 3;

void setup() {
  pinMode (redLED, OUTPUT);
  pinMode (greenLED, OUTPUT);
}

void loop() {
  digitalWrite (redLED, HIGH);
  digitalWrite (greenLED, LOW);
  delay (250);
  digitalWrite (redLED, LOW);
  digitalWrite (greenLED, HIGH);
  delay (250);
}
