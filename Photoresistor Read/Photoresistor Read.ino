int val = 0;

void setup() {
  pinMode (A1, INPUT);
  Serial.begin (9600);
}

void loop() {
  val = analogRead (A1);
  Serial.println(val);
}
