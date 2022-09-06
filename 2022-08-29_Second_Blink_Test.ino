void setup() {
}

void loop() {
  digitalWrite (1, HIGH);
  digitalWrite (3, LOW);
  delay (250);
  digitalWrite (1, LOW);
  digitalWrite (3, HIGH);
  delay (250);
}
