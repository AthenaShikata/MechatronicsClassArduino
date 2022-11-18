#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int time = 0;
int interval = 0;

String text = "pee pee poo poo ";

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);

}

void loop() {
  lcd.setCursor(16, 0);
  lcd.print(text);
  for (int pos = 0; pos < 16; pos++) {
    lcd.scrollDisplayLeft();
    delay(400);
  }
  
}