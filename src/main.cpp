#include <Arduino.h>
#include <wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 0x3c
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);
void setup() {
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCH))

}

void loop() {
// write your code here
}