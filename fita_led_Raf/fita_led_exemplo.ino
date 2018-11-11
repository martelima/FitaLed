#include <FastLED.h>

#define PINLED 5
#define NUM_LEDS 3

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
  delay(100);
  
  
  fill_solid(leds,NUM_LEDS,0x000000);
  FastLED.show();
  delay(100);
}
