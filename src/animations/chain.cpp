#include "globals.h"

void chain(CRGB leds[NUM_LEDS])
{
    for (int i = 0; i < NUM_LEDS; i++)
    {
        if (i % 5 == 0)
        {
            leds[i] = CRGB::Blue1;
            FastLED.show();
        }
    }

    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Blue1;

        if (i % 5 != 0) {
            leds[i - 1] = CRGB::Black;
        }

        delay(150);
        FastLED.show();
    }

    FastLED.clear();
    FastLED.show();
}