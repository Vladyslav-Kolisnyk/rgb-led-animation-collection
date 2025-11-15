#include "globals.h"

void breathing(CRGB leds[NUM_LEDS])
{
    int delayTime = 10;

    for (int i = 0; i < 255; i = i + 20)
    {
        for (int j = 0; j < NUM_LEDS; j++)
        {
            leds[j] = CHSV(i, 200, 200);
        }
        FastLED.show();

        for (int j = 0; j < BRIGHTNESS; j++)
        {
            FastLED.setBrightness(j);
            delay(delayTime);
            FastLED.show();
        }

        for (int j = BRIGHTNESS; j > 0; j--)
        {
            FastLED.setBrightness(j);
            delay(delayTime);
            FastLED.show();
        }
    }

    FastLED.setBrightness(BRIGHTNESS);
    FastLED.clear();
    FastLED.show();
    
}