const int led = 2;
int num;

void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  num = random(11);
  if (num == 10) {
    Serial.println ("Num = 10");
    digitalWrite (led, HIGH);
    delay (200);
    digitalWrite (led, LOW);
    delay (200);
    digitalWrite (led, HIGH);
    delay (200);
    digitalWrite (led, LOW);
    delay (200);
    digitalWrite (led, HIGH);
    delay (200);
    digitalWrite (led, LOW);
    delay (200);
  } else if (num > 3) {
    Serial.println ("10 > Num > 3");
    digitalWrite (led, HIGH);
    delay (600);
    digitalWrite (led, LOW);
    delay (600);
    digitalWrite (led, HIGH);
    delay (600);
    digitalWrite (led, LOW);
    delay (600);
    digitalWrite (led, HIGH);
    delay (600);
    digitalWrite (led, LOW);
  } else {
    Serial.println ("Num < 3");
    digitalWrite (led, HIGH);
    delay (1000);
    digitalWrite (led, LOW);
    delay (1000);
    digitalWrite (led, HIGH);
    delay (1000);
    digitalWrite (led, LOW);
    delay (1000);
    digitalWrite (led, HIGH);
    delay (1000);
    digitalWrite (led, LOW);
  }
  delay (3000);
}
