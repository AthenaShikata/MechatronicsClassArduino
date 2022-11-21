const int row1 = A5;
const int row2 = A4;
const int row3 = A3;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int slot = 0;

void setup() {
  Serial.begin (9600);
  pinMode (row1, INPUT);
  pinMode (row2, INPUT);
  pinMode (row3, INPUT);
}

void loop() {
  val1 = analogRead (row1);
  val2 = analogRead (row2);
  val3 = analogRead (row3);
  Serial.print (val1);
  Serial.print ("    ");
  Serial.print (val2);
  Serial.print ("    ");
  Serial.println (val3);
  delay (200);
}

//Use potentiometer to choose the slot then button to send it? 3 buttons to choose row? 
//serial print the variable for the user to see? display a serial monitor tic tac toe board?