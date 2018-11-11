#include <FastLED.h>

#define PINLED 5
#define NUM_LEDS 3
#define TEMPO 100
CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, PINLED, BRG>(leds, NUM_LEDS);
}

void loop() {
  // put your main code here, to run repeatedly:
  leds[0] = 0xFF0000;
  leds[1] = 0x00FF00;
  leds[2] = 0x0000FF;
  FastLED.show();
  delay(TEMPO);
  leds[0] = 0x00FF00;
  leds[1] = 0x0000FF;
  leds[2] = 0xFF0000;
  FastLED.show();
  delay(TEMPO);
  leds[0] = 0x0000FF;
  leds[1] = 0xFF0000;
  leds[2] = 0x00FF00;
  FastLED.show();
  delay(TEMPO);
  
  
}
