unsigned long stored = 0;
unsigned long elapsed;
const int intervalBlink = 1000;
int toggle = 1;

void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
}
void loop() {
  elapsed = millis();
  if (elapsed - stored > intervalBlink) {
    if (toggle == 1){
      toggle = 0;
      stored = millis();
      digitalWrite (13, HIGH);
    } else if (toggle == 0) {
      toggle = 1;
      stored = millis();
      digitalWrite (13, LOW);
    }
  }
}