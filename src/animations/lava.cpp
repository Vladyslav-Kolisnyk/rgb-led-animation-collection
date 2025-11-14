#include "globals.h"

void lava(CRGB leds[NUM_LEDS])
{
    int position;
    int blendPercentage;

    for (int i = 0; i < NUM_LEDS; i++)
    {
        position = rand() % NUM_LEDS;
        leds[position] = CRGB::Red1;
        FastLED.show();
    }

    for (int i = 0; i < NUM_LEDS * 10; i++)
    {
        position = rand() % NUM_LEDS;
        blendPercentage = rand() % 255;

        leds[position] = blend(CRGB::Red1, CRGB::Black, blendPercentage);
        FastLED.show(); 
        delay(20);
    }

    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Black;
        FastLED.show();
    }
}