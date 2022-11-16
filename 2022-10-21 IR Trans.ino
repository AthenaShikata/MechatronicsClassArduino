#include <IRremote.h> // >v3.9.0

#define PIN_SEND 5

unsigned long prevMillis = 0UL;
unsigned long interval = 1000UL;
unsigned long curMillis;

const int button = 4;

int state = 0;
int alternate = 0;

const unsigned long hexValue = 0x74657374;

void setup() {
  Serial.begin (9600);
  IrSender.begin(PIN_SEND);
  pinMode (button, INPUT_PULLUP);
}

void loop() {
  curMillis = millis();
  if (curMillis - prevMillis > interval) {
    IrSender.sendNEC (hexValue, 32);
    prevMillis = curMillis;
    Serial.print ("SENT ");
    Serial.println (hexValue);
  }
}