#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <NTPClient.h>

#include <Wire.h>
#include <ChistiyBigNumbers.h>

ChistiyBigNumbers chistiyBM;
LiquidCrystal_I2C lcd(0x27, 20, 4);  //LiquidCrystal_I2C уже есть в ChistiyBigNumbers

const char* ssid = "TP-Link_3D37";
const char* password = "61723702";

WiFiUDP ntpUDP;
const long utcOffsetInSeconds = 10800;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

int hour = 0;
int minute = 0;

void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  chistiyBM.begin();
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected");
  timeClient.begin();
  timeClient.update();
}

static int lastMinute = -1;

void loop() {
  hour = timeClient.getHours();
  minute = timeClient.getMinutes();

  if (lastMinute != minute) {
    if (minute < 10) {
      chistiyBM.printBigNum(1, (String(hour).substring(0, 1).toInt()));
      chistiyBM.printBigNum(5, (String(hour).substring(1, 2).toInt()));
      chistiyBM.printBigNum(11, 0);
      chistiyBM.printBigNum(15, (String(minute).substring(0, 1).toInt()));
    } else {
      chistiyBM.printBigNum(1, (String(hour).substring(0, 1).toInt()));
      chistiyBM.printBigNum(5, (String(hour).substring(1, 2).toInt()));
      chistiyBM.printBigNum(11, (String(minute).substring(0, 1).toInt()));
      chistiyBM.printBigNum(15, (String(minute).substring(1, 2).toInt()));
    }
  }

  lastMinute = minute;
  
  chistiyBM.printBigColon(9);
  delay(500);
  lcd.setCursor(9, 1);
  lcd.print(" ");
  lcd.setCursor(9, 2);
  lcd.print(" ");
  delay(500);
  Serial.println(hour);
  Serial.println(minute);
}
