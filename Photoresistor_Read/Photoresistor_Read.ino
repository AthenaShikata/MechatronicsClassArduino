const int pho = A5;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode (pho, INPUT);
}

void loop() {
  val = analogRead (pho);
  Serial.println (val);
  delay (330);
}
