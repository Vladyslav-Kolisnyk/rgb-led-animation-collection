#include "globals.h"

void randomMess(CRGB leds[NUM_LEDS])
{
  for (int i = 0; i < NUM_LEDS; i++)
  {
    int position = rand() % NUM_LEDS;
    int red = rand() % 255;
    int green = rand() % 255;
    int blue = rand() % 255;

    leds[position] = CHSV(red, green, blue);

    FastLED.show();
    delay(100);
  }

  for (int i = NUM_LEDS; i > 0; i--)
  {
    leds[i] = CHSV(0, 0, 0);
    FastLED.show();
    delay(20);
  }
}