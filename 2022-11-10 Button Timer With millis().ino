unsigned long start = 0;
unsigned long end = 0;
unsigned long duration = 0;

int toggle = 0;
int button = 0;
int press = 1;

const int ledToggle = 2;
const int ledButton = 3;

void setup() {
  Serial.begin (9600);
  pinMode (13, INPUT_PULLUP);
  pinMode (ledToggle, OUTPUT);
  pinMode (ledButton, OUTPUT);
}

void loop() {
  press = digitalRead(13);
  if (press == 1) {
    //button up
    button = 0;
  } else if (press == 0) {
    //button down
    if (button == 1) {
      //button is still down
    } else if (button == 0) {
      //button just went down
      button = 1;
      if (toggle == 0) {
        //timer start
        toggle = 1;
        start = millis();
        Serial.println ("Timer has started");
      } else if (toggle == 1) {
        //timer end
        toggle = 0;
        end = millis();
        duration = end - start;
        Serial.print ("The time between button presses was ");
        Serial.print (duration);
        Serial.println (" milliseconds");
      }
    }
  }
  digitalWrite(ledToggle, toggle);
  digitalWrite(ledButton, button);
}