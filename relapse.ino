#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Address 0x27, 16 cols, 2 rows

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.print("Pasindi na ng");
  lcd.setCursor(0, 1);
  lcd.print("ilaw");
  delay(5000);

  lcd.clear();
  lcd.print("Minumulto na 'ko");
  lcd.setCursor(0, 1);
  lcd.print("ng damdamin ko");
  delay(3000);

  lcd.clear();
  lcd.print("Ng damdamin ko");
  delay(2000);

  lcd.clear();
  lcd.print("How can we go");
  lcd.setCursor(0, 1);
  lcd.print("back to being");
  delay(3000);

  lcd.clear();
  lcd.print("friends");
  delay(1000);

  lcd.clear();
  lcd.print("Dinadalaw mo 'ko");
  lcd.setCursor(0, 1);
  lcd.print("bawat gabi");
  delay(5000);

  lcd.clear();
  lcd.print("How can you look");
  lcd.setCursor(0, 1);
  lcd.print("at me & pretend");
  delay(3000);

  lcd.clear();
  lcd.print("Haplos ramdam");
  lcd.setCursor(0, 1);
  lcd.print("parin sa dilim");
  delay(3000);

  lcd.clear();
  lcd.print("na-mamamayapa?");
  delay(1000); // 1 second pause

  lcd.clear();
  lcd.print("Hindi na");
  delay(3000); // stays 3 seconds

  lcd.clear();
  lcd.print("back to being");
  delay(1000); // stays 1 second
 
  lcd.clear();
  lcd.print("friends");
  delay(1000); // 1 second pause

  lcd.clear();
  lcd.print("When we just");
  lcd.setCursor(0, 1);
  lcd.print("shared a bed?");
  delay(3000);
  
  lcd.clear();
  lcd.print("Hey_sERi");
  delay(3000); // stays 3 seconds
}
