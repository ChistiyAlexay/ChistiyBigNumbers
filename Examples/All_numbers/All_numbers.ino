#include <Wire.h>
#include <ChistiyBigNumbers.h>

ChistiyBigNumbers chistiyBM;
LiquidCrystal_I2C lcd(0x27, 20, 4);  //LiquidCrystal_I2C уже есть в ChistiyBigNumbers

void setup() {
  lcd.init();
  lcd.backlight();
  chistiyBM.begin();
}

void loop() {
  lcd.clear();

  chistiyBM.printBigNum(0, 0);
  chistiyBM.printBigNum(3, 1);
  chistiyBM.printBigNum(7, 2);
  chistiyBM.printBigNum(11, 3);
  chistiyBM.printBigNum(15, 4);

  delay(4500);

  lcd.clear();

  chistiyBM.printBigNum(0, 5);
  chistiyBM.printBigNum(4, 6);
  chistiyBM.printBigNum(8, 7);
  chistiyBM.printBigNum(12, 8);
  chistiyBM.printBigNum(16, 9);
  chistiyBM.printBigColon(19);

  delay(4500);
}