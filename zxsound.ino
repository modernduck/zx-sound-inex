#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET -1
Adafruit_SSD1306 display(OLED_RESET);

void setup() {
  // put your setup code here, to run once:
   display.begin(SSD1306_SWITCHCAPVCC, 0x3C); //เริ่มการใช้งานจอ
   display.clearDisplay();//ล้างจอ
   display.setTextSize(2);//เราจะให้ตัวอักษร Font Size เป็น 1 แล้วนะ
   display.setTextColor(WHITE);//ให้สีตัวอักษรสีขาว
}

void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();
  display.setCursor(0, 0);
  display.println(analogRead(A0));
  display.display();

}
