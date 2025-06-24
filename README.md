# ChistiyBigNumbers
Библиотека для быстрого и удобного создания больших цифр на дисплее lcd 2004 i2c   
Шрифт:   
<br>
![](https://github.com/user-attachments/assets/77dca485-9fb9-4f43-8312-4d11bf3ee802)
 
![](https://github.com/user-attachments/assets/656dcbaa-732d-4d15-b7b5-be53750665bf)

<br>
```cpp
#include <ChistiyBigNumbers.h>

ChistiyBigNumbers chistiyBM; //Инициализация
void setup() {
  chistiyBM.begin();
}
void loop(){
  chistiyBM.printBigNum(1, 7); //Печатаем семёрку во втором столбце дисплея (Отсчёт с нуля)
}
```
Для использования библиотеки необходимо предварительно установить LiquidCrystal_I2C.h. Данная библиотека уже используется, и импортировать её дважды не требуется:
```cpp
#include <Wire.h>
#include <ChistiyBigNumbers.h>

ChistiyBigNumbers chistiyBM;
LiquidCrystal_I2C lcd(0x27, 20, 4);

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
```
