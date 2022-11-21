unsigned long storedBlink = 0;
unsigned long storedCheck = 0;
unsigned long elapsed;
const int intervalBlink = 2200;
const int intervalCheck = 500;
int toggle = 1;

void setup() {
  Serial.begin(9600);
  pinMode (13, OUTPUT);
}
void loop() {
  elapsed = millis();
  if (elapsed - storedBlink > intervalBlink) {
    if (toggle == 1){
      toggle = 0;
      storedBlink = millis();
      digitalWrite (13, HIGH);
    } else if (toggle == 0) {
      toggle = 1;
      storedBlink = millis();
      digitalWrite (13, LOW);
    }
  }
  if (elapsed - storedCheck > intervalCheck) {
    Serial.print ("LED is ");
    storedCheck = millis();
    if (toggle == 1) {Serial.println ("OFF");} 
    else if (toggle == 0) {Serial.println ("ON");}
  }
}