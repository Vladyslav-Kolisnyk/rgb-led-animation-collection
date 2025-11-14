#include "globals.h"

void sparks(CRGB leds[NUM_LEDS])
{
  int halfLen = 4;
  
  for (int i = 0; i < 50; i++)
  {
    int dropstart = 0;

    while (dropstart < halfLen || dropstart > NUM_LEDS - halfLen)
    {
      dropstart = rand() % NUM_LEDS;
    }
    
    for (int j = 0; j < halfLen; j++)
    {
      if (j == 0)
      {
        leds[dropstart] = CHSV(0, 0, 200);
      }
      else {
        leds[dropstart - j] = CHSV(0, 0, 200 - (j * 20));
        leds[dropstart + j] = CHSV(0, 0, 200 - (j * 20));
      }

      FastLED.show();
      delay(80);

      FastLED.clear();
      FastLED.show();
    }
  }
}