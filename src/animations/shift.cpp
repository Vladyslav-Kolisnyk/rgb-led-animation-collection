#include "globals.h"

void shift(CRGB leds[NUM_LEDS])
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < NUM_LEDS; j++)
        {
            if (i % 2 == 0) 
            {
               if (j % 2 == 0)
               {
                    leds[j] = CRGB::DeepPink1;
               } 
               else
               {
                    leds[j] = CRGB::Black;
               }
               
               FastLED.show();
            }
            else 
            {
                if (j % 2 != 0)
                {
                    leds[j] = CRGB::DeepPink1;
                } 
                else
                {
                    leds[j] = CRGB::Black;
                }

                FastLED.show();
            }
        }
    }

    FastLED.clear();
    FastLED.show();
}