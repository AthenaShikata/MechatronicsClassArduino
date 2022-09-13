const int led = 2;
const int pho = A5;
int val = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pho, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val = analogRead (pho);
  while (val < 650) {
    digitalWrite (led, HIGH);
    Serial.print ("The photoresistor reads ");
    Serial.println (val);
    Serial.println ("The photoresistor value is less than 600");
    Serial.println ("The LED is on");
    Serial.println ();
    delay (1000);
    val = analogRead (pho);
  }
  digitalWrite (led, LOW);
  Serial.println ("poo");
  Serial.println ("poo");
  Serial.println ("poo");
  Serial.println ("poo");
  Serial.println ("poo");
  Serial.println ();
  delay (2000);
}
