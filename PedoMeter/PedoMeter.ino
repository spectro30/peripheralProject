#include <LiquidCrystal.h>
String data;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop()
{
  data = Serial.readString();
  Serial.flush();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(data);
  delay(2000);
}
