const int buttons = A0;
const int led1 = 13;
const int led2 = 11;
const int led3 = 9;
const int led4 = 7;
const int led5 = 5;
const int led6 = 3;

int val = 0;
float volts = 0;
float calc = 0;
float ohms = 0;

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
  volts = (val*.004892); //val to volts
  ohms = 
  Serial.println (volts);
  Serial.println (ohms);
  Serial.println (" ");
  
}

/*
y = -66411.4*.579301^x + 30198*1.20257^x + -26161000*.0000000000000012738^x + -.0384017*x^-7.8324 + 
.514737*x^-6.84056 + -276331*x^.29327 + 280488*x^.181037

y = (3.121*10^11 * x^-2.78931) + (1.7736*10^7 * x^-2.67418) - (2.3852*10^11 * x^-2.78157) + 
 (11436.2 * x^1.34313) + (4.1189*10^11 * x^-2.7833) - (11172.9 * x^1.35848) - (4.8549*10^11 * x^-2.78801)


  for (int i = 0; i < 6; i++) {
    int b = bitRead(ohms, i);
    digitalWrite (-2*i+13, b);
    Serial.print(b);
    Serial.print("  ");
  }

  for (int i = 0; i < 6; i++) {
    int resistorVals [] = {
      32000, 16000, 8000, 4000, 2000, 1000,
    };
    int a = ohms;
    int b = a - resistorVals[i];
    if (b >= 0) {
      c = 1;
      a = b;
    } else if (b < 0) {
      c = 0;
    }
    int c = //is pos neg
    digitalWrite (-2*i+13, c);
    Serial.print(c);
    Serial.print("  ");
  }
*/