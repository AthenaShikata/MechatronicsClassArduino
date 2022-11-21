#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    Serial.println ("Started");
    delay(100);
    lcd.clear();
    lcd.setCursor(16, 0);
    while (Serial.available() > 0) {
      lcd.write (Serial.read());
    }
    delay (100);
    for (int pos = 0; pos < 32; pos++) {
      lcd.scrollDisplayLeft();
      delay(250);
    }
    Serial.println ("Complete");
  }
}