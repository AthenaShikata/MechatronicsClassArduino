const int led = 2;

void setup() {
  Serial.begin (9600);
  Serial.println ("Setup Has Initiated");
  pinMode (led, OUTPUT);
}

void loop() {
  Serial.println ("Loop Has Commenced");
  for (int i = 1; i < 21; i++) {
    if (i < 10) {
      Serial.println ("The loop is less than 10");
    } else if (i == 10) {
      Serial.println ("The loop is equal to 10");
    } else {
      Serial.println ("The loop is greater than 10");
    }
    delay (500);
  }
  Serial.println ("Loop Has Concluded");
}
