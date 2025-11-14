#include "globals.h"

void colorWave(CRGB leds[NUM_LEDS])
{
  for (int i = 0; i < 255; i = i + 20)
  {
    for (int j = 0; j < NUM_LEDS; j++)
    {
      leds[j] = CHSV(i, 200, 200);
      FastLED.show();
      delay(10);
    }
    for (int j = 0; j < NUM_LEDS; j++)
    {
      leds[j] = CHSV(0, 0, 0);
      FastLED.show();
      delay(10);
    }
    
  }

  FastLED.clear();
  FastLED.show();
}