#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int state = 1;
int num = 0;
int toggle = 1;

void setup() {
  lcd.begin(16, 2);
  pinMode (6, INPUT_PULLUP);
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print ("Button = OFF");
  lcd.setCursor(0, 1);
  lcd.print (num);
}

void loop() {
  state = digitalRead (6);
  if (toggle == 1) {
    //primed
    if (state == 1) {
      // button up
    } else if (state == 0) {
      // button down
      toggle = 0;
      lcd.setCursor(0, 0);
      lcd.print ("Button = ON     ");
      num++;
      lcd.setCursor(0, 1);
      lcd.print (num);
      Serial.println (num);
    }
  } else if (toggle == 0) {
    //not primed
      if (state == 1) {
        //button up
        toggle = 1;
        lcd.setCursor(0, 0);
        lcd.print ("Button = OFF    ");
      } else if (state == 0) {
        //button down
      }
  }
}