
/*
* medAzizLHB
* SkorpTech
* Arduino IDE
* USING NodeMCU ESP8266
*/

#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
char auth[] = "";//Enter your Auth token
char ssid[] = "";//Enter your WIFI name
char pass[] = "";//Enter your WIFI password
 
BlynkTimer timer;
bool pinValue = 0;
 
#define trig D3
#define echo D4
 
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Wire.begin(D2, D1);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
 
BLYNK_WRITE(V0) {
  pinValue = param.asInt();
}

void loop() {
  Blynk.run();
  timer.run();
}
 

 
  digitalWrite(trig, LOW);
  delayMicroseconds(4);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  long t = pulseIn(echo, HIGH);
  long cm = t / 29 / 2;
 
  Blynk.virtualWrite(V1, cm);
  Serial.println(cm);
  lcd.setCursor(0, 0);
  lcd.print("Trash Level: ");
  lcd.print(cm);
  lcd.print("   ");
}
