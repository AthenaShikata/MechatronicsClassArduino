const int badled = 3;
const int led = 2;
const int button = 6;
int state;

void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (6, INPUT_PULLUP);
  Serial.begin (9600);
}

void loop() {
  state = digitalRead (button);
  Serial.println (state);
  if (state == 1) {
    digitalWrite (led, LOW);
    digitalWrite (badled, HIGH);
  } else {
    digitalWrite (led, HIGH);
    digitalWrite (badled, LOW);
  }
}
