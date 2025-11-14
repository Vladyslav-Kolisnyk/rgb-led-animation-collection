#include "globals.h"

void bricks(CRGB leds[NUM_LEDS])
{
    int free_leds = NUM_LEDS; 

    for (int i = 0; i < NUM_LEDS; i++)
    {
        for (int j = 0; j < free_leds; j++)
        {
            leds[j] = CRGB::Orange1;
            leds[j - 1] = CRGB(0, 0, 0);
            FastLED.show();
            delay(10);
        }

        free_leds--;
    }

    leds[NUM_LEDS] = CRGB(0, 0, 0);
    FastLED.show();

    for (int i = NUM_LEDS - 1; i > 0; i--)
    {
        for (int j = i; j < NUM_LEDS; j++)
        {
            leds[j] = CRGB::Orange1;
            leds[j - 1] = CRGB(0, 0, 0);
            FastLED.show();
            delay(10);
        }
        leds[NUM_LEDS - 1] = CRGB(0, 0, 0);
        FastLED.show();
    }
 
    FastLED.clear();
    FastLED.show();
}