const int button = 2;
const int relay = 3;

int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode (button, INPUT_PULLUP);
  pinMode (relay, OUTPUT);
}

void loop() {
  val = digitalRead (button);
  Serial.println (val);
  if (val == 0){
    digitalWrite (relay, HIGH);
    Serial.println ("ON");
  } else {
    digitalWrite (relay, LOW);
    Serial.println ("OFF))");
  }
}
