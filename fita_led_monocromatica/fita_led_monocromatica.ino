#include <FastLED.h>

#define PINLED 5
#define NUM_LEDS 3

CRGB i = 0;
int btn = 0;
CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, PINLED, BRG>(leds, NUM_LEDS);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura_btn = digitalRead(2);
  if (leitura_btn == 0) {
   
    btn = !btn;
    delay(300);
  }
  if (btn == 0) {
    i--;
    fill_solid(leds, NUM_LEDS, i);
    FastLED.show();
    delay(10);

  } else {
    i++;
    fill_solid(leds, NUM_LEDS, i);
    FastLED.show();
    delay(10);
  }
}
