int leftLimitSwitch=4;
int rightLimitSwitch=3;
int startPulse=2;
int boardLED=13;

byte motorSpeed = 0;
int MDP1 = 6;
int MDP2 = 7;
int MSP = 9;

int startPulseStatus = LOW;
int leftLimStat;
int rightLimStat;
int toggle = 0;

int device = 0; //0 for track 1 for spinny

void setup() {
  Serial.begin(9600);
  pinMode (MDP1, OUTPUT);
  pinMode (MDP2, OUTPUT);
  pinMode (MSP, OUTPUT);
  pinMode (leftLimitSwitch, INPUT_PULLUP);
  pinMode (rightLimitSwitch, INPUT_PULLUP);
  motorSpeed = 0;
  digitalWrite (MDP1, LOW);
  digitalWrite (MDP2, HIGH);
}

void loop() {
  motorSpeed = 255;
  analogWrite (MSP, motorSpeed);
  leftLimStat = digitalRead (leftLimitSwitch);
  rightLimStat = digitalRead (rightLimitSwitch);
  Serial.print (leftLimStat);
  Serial.print ("    ");
  Serial.print (rightLimStat);
  Serial.print ("    ");
  if (toggle == 0) {
    if (leftLimStat == device){
      digitalWrite (MDP2, LOW);
      Serial.print ("Left Switch");
      Serial.print ("    ");
      delay (3000);
      digitalWrite (MDP1, HIGH);
      toggle = 1;
    }
  } else if (toggle == 1) {
    if (rightLimStat == device) {
      digitalWrite (MDP1, LOW);
      Serial.print ("Right Switch");
      Serial.print ("    ");
      delay (3000);
      digitalWrite (MDP2, HIGH);
      toggle = 0;
    }
  }
  
  Serial.println ("    ");
}
