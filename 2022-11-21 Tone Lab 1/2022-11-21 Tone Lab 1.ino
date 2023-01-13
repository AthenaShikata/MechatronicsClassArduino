const int speaker = 13;
const int pot = A5;

int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode (pot, INPUT);
  pinMode (speaker, OUTPUT);
}

void loop() {
  val = 20 * analogRead(pot);
  Serial.println (val);
  tone(speaker, val);
}
