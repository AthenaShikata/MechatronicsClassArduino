const int trigPin = 11;
const int echoPin = 12;
const int led = 2;

long duration;
int distance;
int count = 0;
int detect = 0;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
  if (distance < 10) {
    if (detect == 0){
     detect = 1;
     count++;
    } 
    } else if (distance >= 10) {
      detect = 0;
  }
  Serial.println ("Loop Complete");
  Serial.print ("COUNT VALUE: ");
  Serial.println (count);
}
