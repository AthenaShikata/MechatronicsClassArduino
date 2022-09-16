const int led = 2;

void setup() {
  Serial.begin (9600);
  Serial.println ("Setup Has Initiated");
  pinMode (led, OUTPUT);
}

void loop() {
  Serial.println ("Loop Has Commenced");
  for (int i = 1; i < 99; i = i + 3) {
    if (i % 2 == 0) {
      Serial.print ("The loop counter ");
      Serial.print (i);
      Serial.println (" is even");
    } else if (i % 2 == 1) {
      Serial.print ("The loop counter ");
      Serial.print (i);
      Serial.println (" is odd");
    } else {
      Serial.println ("ERROR");
      Serial.println (i);
    }
    delay (500);
  }
  Serial.println ("Loop Has Concluded");
}
