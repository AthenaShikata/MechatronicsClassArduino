#include <IRremote.h> // >v.3.9.0

#define PIN_RECV 5

const int led = 3;

unsigned long prevMillis = 0UL;
unsigned long interval = 1000UL;
unsigned long curMillis;

int state = 0;
int alternate = 0;

void setup() {
  Serial.begin (9600);
  IrReceiver.begin(PIN_RECV);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite (led, HIGH);
  if (IrReceiver.decode()) {
    Serial.println("Received ");
    IrReceiver.printIRResultShort(&Serial);
    IrReceiver.resume();
  }
}