const int button = 7;
const int led = 2;
int state;

void setup() {
  pinMode (button, INPUT);
  pinMode (led, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  state = digitalRead (button); 
  Serial.println (state);
  if (state == 1) {
  digitalWrite (led, LOW);
  delay (2000);
  digitalWrite (led, HIGH);
  delay (2000);
  } else {
    digitalWrite (led, HIGH);
    delay (200);
    digitalWrite (led, LOW);
    delay (200);
  }
}
