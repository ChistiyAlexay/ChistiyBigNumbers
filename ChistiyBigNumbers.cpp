#include "ChistiyBigNumbers.h"

ChistiyBigNumbers::ChistiyBigNumbers(uint8_t lcd_addr, uint8_t cols, uint8_t rows) : lcd(lcd_addr, cols, rows) {}

void ChistiyBigNumbers::begin() {
  lcd.init();
  lcd.backlight();
  registerChars();
}

void ChistiyBigNumbers::clear() {
  lcd.clear();
}

void ChistiyBigNumbers::registerChars() {
  for (uint8_t i = 0; i < 7; i++) {
    lcd.createChar(i, digitCharsBig[i]);
  }
}

void ChistiyBigNumbers::printBigNum(int col, int digit) {
  switch (digit) {
    case 0: zeroNum(col); break;
    case 1: oneNum(col); break;
    case 2: twoNum(col); break;
    case 3: threeNum(col); break;
    case 4: fourNum(col); break;
    case 5: fiveNum(col); break;
    case 6: sixNum(col); break;
    case 7: sevenNum(col); break;
    case 8: eightNum(col); break;
    case 9: nineNum(col); break;
  }
}

void ChistiyBigNumbers::printBigColon(int col) {
  colon(col);
}


void ChistiyBigNumbers::zeroNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(0);
  lcd.setCursor(cum, 3);
  lcd.write(4);
  lcd.setCursor(cum, 2);
  lcd.write(1);
  lcd.setCursor(cum, 1);
  lcd.write(1);

  lcd.setCursor(cum + 1, 1);
  lcd.print(" ");
  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::oneNum(int cum) {
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);

  for (int x = 0; x < 2; x++) {
    for (int i = 0; i < 4; i++) {
      lcd.setCursor(cum + x, i);
      lcd.print(" ");
    }
  }
}

void ChistiyBigNumbers::twoNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(0);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum, 1);
  lcd.write(2);
  lcd.setCursor(cum, 2);
  lcd.write(1);
  lcd.setCursor(cum, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(0);
  lcd.setCursor(cum + 2, 3);
  lcd.write(0);

  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 2, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::threeNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(0);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum, 1);
  lcd.write(2);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(0);
  lcd.setCursor(cum, 3);
  lcd.write(0);

  lcd.setCursor(cum + 0, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::fourNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);

  lcd.setCursor(cum + 1, 0);
  lcd.print(" ");
  lcd.setCursor(cum + 0, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 0, 3);
  lcd.print(" ");
  lcd.setCursor(cum + 1, 3);
  lcd.print(" ");
}

void ChistiyBigNumbers::fiveNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(0);
  lcd.setCursor(cum, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum + 2, 1);
  lcd.write(2);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(0);
  lcd.setCursor(cum, 3);
  lcd.write(0);

  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 0, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::sixNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(0);
  lcd.setCursor(cum, 1);
  lcd.write(1);
  lcd.setCursor(cum, 2);
  lcd.write(1);
  lcd.setCursor(cum, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(0);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 1);
  lcd.write(2);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);

  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::sevenNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(0);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);

  for (int x = 0; x < 2; x++) {
    for (int i = 1; i < 4; i++) {
      lcd.setCursor(cum + x, i);
      lcd.print(" ");
    }
  }
}

void ChistiyBigNumbers::eightNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(4);
  lcd.setCursor(cum, 3);
  lcd.write(4);
  lcd.setCursor(cum, 2);
  lcd.write(1);
  lcd.setCursor(cum, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum + 1, 2);
  lcd.write(3);
}

void ChistiyBigNumbers::nineNum(int cum) {
  lcd.setCursor(cum, 0);
  lcd.write(6);
  lcd.setCursor(cum + 1, 0);
  lcd.write(6);
  lcd.setCursor(cum + 2, 0);
  lcd.write(6);
  lcd.setCursor(cum, 1);
  lcd.write(1);
  lcd.setCursor(cum + 1, 1);
  lcd.write(2);
  lcd.setCursor(cum + 2, 1);
  lcd.write(1);
  lcd.setCursor(cum + 2, 2);
  lcd.write(1);
  lcd.setCursor(cum + 2, 3);
  lcd.write(4);
  lcd.setCursor(cum + 1, 3);
  lcd.write(4);
  lcd.setCursor(cum, 3);
  lcd.write(4);

  lcd.setCursor(cum + 1, 2);
  lcd.print(" ");
  lcd.setCursor(cum + 0, 2);
  lcd.print(" ");
}

void ChistiyBigNumbers::colon(int cum) {
  lcd.setCursor(cum, 1);
  lcd.write(5);
  lcd.setCursor(cum, 2);
  lcd.write(5);
}
