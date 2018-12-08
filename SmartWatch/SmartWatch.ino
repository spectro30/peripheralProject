#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String sms, s, barCode, pedoStatus, distance, steps;


void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop()
{
   
   
    s = Serial.readString();
  
  if(s == "Msg"){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    sms = Serial.readString();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(sms);
    delay(3000);
  }
  else if(s == "Bar"){
    barCode = Serial.readString();
    lcd.clear();
    lcd.setCursor(0,0);
    if(barCode = "1515246906"){
      lcd.print("Door Unlocked");
      // servo work here
    }
    else{
      lcd.print("Wrong Bar Code");
    } 
    delay(3000);
  }
  else if( s == "Pedo"){
    pedoStatus = Serial.readString();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(pedoStatus);
    delay(2000);
  }
  else{
    distance = Serial.readString();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(distance);
    
    lcd.setCursor(1,0);
    steps = Serial.readString();
    lcd.print(steps);
    delay(500);
  }
} 
