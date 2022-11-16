// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("I AM IMMORTAL!");
}

void loop() {
  lcd.setCursor(4, 1);
  lcd.print(millis() / 1000);
}