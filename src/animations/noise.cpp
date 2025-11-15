#include "globals.h"

void noise(CRGB leds[NUM_LEDS])
{
    int positon = 0;

    for (int i = 0; i < 200; i++)
    {
        for (int j = 0; j < NUM_LEDS / 4; j++)
        {
            positon = rand() % NUM_LEDS;
            leds[positon] = CRGB::White;
        }
        
        FastLED.show();
        delay(50);
        FastLED.clear();
        FastLED.show();
    }

    FastLED.clear();
    FastLED.show();
}