#include "globals.h"

void snake(CRGB leds[NUM_LEDS])
{
  for (int i = 0; i < NUM_LEDS; i++)
  {
    if (i % 10 == 0)
    {
      leds[i] = CRGB::Orange2;
      FastLED.show();
    }
  }

  int len = 3;
  for (int i = 0; i < NUM_LEDS; i++)
  {
    leds[i] = CRGB(0, 200, 0);

    if (i > len) 
    {
      leds[i - len] = CRGB(0, 0, 0);
      leds[i - (len - 2)] = CRGB(0, 80, 0);
      leds[i - (len - 1)] = CRGB(0, 50, 0);
    }
    
    if (i == len + 1)
    {
      leds[0] = CRGB(0, 0, 0);
    }

    if (i % 10 == 0)
    {
      len++;
    }

    FastLED.show();
    delay(150);
  }

  FastLED.clear();
  FastLED.show();
}