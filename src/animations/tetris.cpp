#include "globals.h"

void tetris(CRGB leds[NUM_LEDS])
{
    int freeLeds = NUM_LEDS;
    int hue = 0;
    int lenBlock = 0;

    while (freeLeds > 0)
    {
        hue = rand() % 255;
        lenBlock = (rand() % 5) + 1;

        for (int i = 0; i < freeLeds; i++)
        {
            leds[i] = CHSV(hue, 200, 200);
            leds[i - (lenBlock + 1)] = CRGB::Black;
            FastLED.show();
            delay(50);
        }

        freeLeds = freeLeds - (lenBlock + 1);
    }

    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Black;
        FastLED.show();
        delay(10);
    }
    
}