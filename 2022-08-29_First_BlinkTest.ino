void setup() 
{
  pinMode (LED_BUILTIN, OUTPUT);
}

void loop() 
{
  digitalWrite (1, HIGH);
  delay (500);
  digitalWrite (3, HIGH);
  delay (500);
  digitalWrite (1, LOW);
  delay (500);
  digitalWrite (3, LOW);
  delay (500);
}
