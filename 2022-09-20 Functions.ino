//Assign pins
const int trigPin = 11;
const int echoPin = 12;
const int led = 2;
const int buttonCM = 3;
const int buttonIN = 4;

//Assign Variables
long duration;
int distance;
int BcountCM = 0;
int BcountIN = 0;
int detect = 0;
int stateCM = 0;
int stateIN = 0;

//Initiate
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buttonCM, INPUT);
  pinMode(buttonIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  //Pull Up Button
  //Reading the buttons
  stateCM = digitalRead (buttonCM);
  stateIN = digitalRead (buttonIN);
  if (stateCM + stateIN == 0) { //Both pressed
    Serial.println ("You can only press one");
    digitalWrite (led, HIGH);
    } else if (stateCM + stateIN == 1) { //One pressed
      digitalWrite (led, LOW);
      if (detect == 0) { //Hasn't counted this press yet
        int unit = getUnit(stateCM, stateIN);
        distance = getDistance(unit);
        detect = 1;
      } else if (detect == 1) { //Has counted this press
        digitalWrite (led, HIGH);
      }
    } else if (stateCM + stateIN == 2) { //No press
      Serial.println ("NULL");
      digitalWrite (led, LOW);
      detect = 0;
    }
  delay (200);
}

int getDistance(int u) { //Calculating Distance
  int distanceResult = 0;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  if (u == 0) { //Centimeters
    distanceResult = duration * 0.0343 / 2;
    Serial.print("Distance: ");
    Serial.print(distanceResult);
    Serial.println("cm");
    BcountCM++;
    Serial.print ("The Centimeters Button has been pressed ");
    Serial.print (BcountCM);
    Serial.println (" times");
  } else if (u == 1) { //Inches
    distanceResult = duration * 0.0135 / 2;
    Serial.print("Distance: ");
    Serial.print(distanceResult);
    Serial.println("in");
    BcountIN++;
    Serial.print ("The Inches Button has been pressed ");
    Serial.print (BcountIN);
    Serial.println (" times");
  }
  return distanceResult;
}

int getUnit(int x, int y) { //Calculating Inches or Centimeters  x=cm y=in
  if (x == 0) {
    return 0;
  } else if (y == 0) {
    return 1;
  }
}