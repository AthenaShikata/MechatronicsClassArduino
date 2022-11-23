#include "pitches.h"

const int speaker = 8;
const int button = 2;

int play = 1;

int melody[] = {
  NOTE_G4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, REST,NOTE_FS4, NOTE_G4, REST,
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4, 4,
};

int numTones = sizeof(melody)/sizeof(melody[0]);

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(speaker, OUTPUT);
}

void loop() {
  play = digitalRead(button);
  if (play == 0) {
    for (int thisNote = 0; thisNote < numTones; thisNote++) {
      int noteDuration = 1000 / noteDurations[thisNote];
      tone(speaker, melody[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(speaker);
    }
  }
}
