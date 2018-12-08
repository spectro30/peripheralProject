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
  lcd.clear();
  lcd.setCursor(0,0);
  if(data == "1515246906"){
    lcd.print("Access Given");  
    delay(5000);
  }
  else{
    lcd.print("No Access"); 
  }
  delay(2000);
}
