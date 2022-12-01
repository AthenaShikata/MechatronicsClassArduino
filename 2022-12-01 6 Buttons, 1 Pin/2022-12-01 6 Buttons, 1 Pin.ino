const int buttons = A0;
const int led1 = 13;
const int led2 = 11;
const int led3 = 9;
const int led4 = 7;
const int led5 = 5;
const int led6 = 3;

int val = 0;
int calc = 0;
String strn = "000000";

void setup() {
  Serial.begin(9600);
  pinMode(buttons, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() {
  val = analogRead(buttons);
  for (int i = 0; i < 6; i++) {
    int b = bitRead(calc, i);
    digitalWrite (-2*i+13, b);
    Serial.println(b);
  }
  Serial.println(" ");
}

//0.0144 + 0.0736*x + -.000819*x^2 + .00000435*x^3