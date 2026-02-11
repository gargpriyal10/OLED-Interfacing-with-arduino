/**
 * @file main.cpp
 * @brief OLED demo sketch using Adafruit SSD1306 and GFX libraries.
 *
 * This example initializes an SSD1306-based OLED display over I2C and
 * writes a short list of names to the display. The sketch is intended
 * as a minimal starting point for experimenting with small monochrome
 * I2C OLED modules (typically 128x64 or 128x32).
 *
 * Dependencies:
 *  - Adafruit_GFX
 *  - Adafruit_SSD1306
 *  - Wire (built into Arduino core)
 *
 * @author Priyal Garg
 * @author Sneha Singh
 * @author Riya Raghav
 * @date 2026-02-11
 * @version 1.0
 */

#include <Arduino.h>
#include <wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

/**
 * @brief OLED display width in pixels.
 *
 * Typical SSD1306 modules come in 128x32 and 128x64 variants; this
 * project targets a 128x64 display.
 */
#define SCREEN_WIDTH 128

/**
 * @brief OLED display height in pixels.
 */
#define SCREEN_HEIGHT 64

/**
 * @brief I2C address of the OLED display.
 *
 * Common values are 0x3C and 0x3D depending on the module wiring.
 */
#define OLED_ADDR 0x3c

/**
 * @brief OLED display instance.
 *
 * Construct the Adafruit_SSD1306 object with the chosen width and height.
 * The actual I2C initialization is performed by display.begin().
 */
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);

/**
 * @brief Arduino setup() function.
 *
 * Initializes the serial port for debug messages, attempts to initialize
 * the SSD1306 display over I2C, and writes three lines of text to the
 * display. If the display initialization fails the function prints an
 * error to Serial and halts execution.
 *
 * @note This function blocks forever if the display is not found to make
 *       the failure obvious during development. Remove or change this
 *       behavior for production code as appropriate.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);
    if (!display.begin(SSD1306_SWITCHCAPVCC , OLED_ADDR)) {
        Serial.println("OLED not found");
        while (true);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0,0);
    display.println("Priyal Garg");
    display.println("Sneha Singh");
    display.println("Riya Raghav");
    display.display();

}

/**
 * @brief Arduino loop() function.
 *
 * Main application loop. Left intentionally empty; add periodic tasks
 * or input handling here.
 *
 * @return void
 */
void loop() {
// write your code here
}