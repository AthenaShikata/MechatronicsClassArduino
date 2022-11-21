const int led = 2;
const int pot = A5;
int val = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead (pot);
  if (val > 819) {
    Serial.print ("Value = ");
    Serial.println (val);
    Serial.println ("Fast");
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
  } else if (val > 205) {
    Serial.print ("Value = ");
    Serial.println (val);
    Serial.println ("Medium");
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
    Serial.print ("Value = ");
    Serial.println (val);
    Serial.println ("Slow");
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
