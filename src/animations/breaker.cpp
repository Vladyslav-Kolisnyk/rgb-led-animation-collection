#include "globals.h"

void breaker(CRGB leds[NUM_LEDS])
{
    int freeLeds = rand() % (NUM_LEDS - 3);
    int limit = NUM_LEDS - (freeLeds + 2);
    
    for (int i = freeLeds; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Green1;
        FastLED.show();
    }

    for (int i = 0; i < limit; i++)
    {
        for (int j = 0; j < freeLeds; j++)
        {
            leds[j] = CRGB::White;
            leds[j - 1] = CRGB::Black;
            delay(10);
            FastLED.show();
        }

        freeLeds++;
        leds[freeLeds] = CRGB::Black;

        for (int j = freeLeds; j > 0; j--)
        {
            leds[j] = CRGB::White;
            leds[j + 1] = CRGB::Black;
            delay(10);
            FastLED.show();
        }
        
    }

    FastLED.clear();
    FastLED.show();
}