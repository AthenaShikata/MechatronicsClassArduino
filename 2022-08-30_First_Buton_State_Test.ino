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
  digitalWrite (led, state);
}
