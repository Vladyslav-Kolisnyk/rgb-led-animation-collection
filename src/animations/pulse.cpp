#include "globals.h"

void pulse(CRGB leds[NUM_LEDS])
{
    int delayTime = 150;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < NUM_LEDS; k = k + 7)
            {
                leds[k + j] = CRGB::Green2;
                leds[k - j] = CRGB::Green2;
            }
            FastLED.show();
            delay(delayTime);
        }
        for (int j = 4; j > 0; j--)
        {
            for (int k = 0; k < NUM_LEDS; k = k + 7)
            {
                leds[k + j] = CRGB::Black;
                leds[k - j] = CRGB::Black;
            }

            FastLED.show();
            delay(delayTime);
        }

        FastLED.clear();
        FastLED.show();
        delay(delayTime);
    }
    
    FastLED.clear();
    FastLED.show();
    
}