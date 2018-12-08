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
  while(Serial.available() == 0){
    
  }
  delay(50);
  data = Serial.readString();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(data);
}
