#ifndef CHISTIYBIGNUMBERS
#define CHISTIYBIGNUMBERS

#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

class ChistiyBigNumbers {
  public:
    ChistiyBigNumbers(uint8_t lcd_addr = 0x27, uint8_t cols = 20, uint8_t rows = 4);
    void begin();
    void clear();
    void printBigNum(int col, int digit);
    void printBigColon(int col);

  private:
    LiquidCrystal_I2C lcd;
    void registerChars();

    void zeroNum(int col);
    void oneNum(int col);
    void twoNum(int col);
    void threeNum(int col);
    void fourNum(int col);
    void fiveNum(int col);
    void sixNum(int col);
    void sevenNum(int col);
    void eightNum(int col);
    void nineNum(int col);
    void colon(int col);

    byte digitCharsBig[7][8] = {
      { 0b00000, 0b00000, 0b11111, 0b11111, 0b11111, 0b11111, 0b00000, 0b00000 },
      { 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111 },
      { 0b00000, 0b00000, 0b00000, 0b00000, 0b11111, 0b11111, 0b11111, 0b11111 },
      { 0b11111, 0b11111, 0b11111, 0b11111, 0b00000, 0b00000, 0b00000, 0b00000 },
      { 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b00000, 0b00000 },
      { 0b00000, 0b00000, 0b01110, 0b01110, 0b01110, 0b01110, 0b00000, 0b00000 },
      { 0b00000, 0b00000, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111, 0b11111 }
    };
};

#endif
