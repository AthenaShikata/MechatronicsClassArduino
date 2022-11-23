const int speaker = 13;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tone(speaker, 3000, 500);
}
