#include "globals.h"

void drops(CRGB leds[NUM_LEDS])
{
    int delayTime = 50;

    int position;
    int size;
    CRGB color;

    for (int i = 0; i < 50; i++)
    {
        position = rand() % NUM_LEDS;
        size = (rand() % 10) + 1;
        
        if (i % 2 == 0)
        {
            color = CRGB::Aquamarine;
        } 
        else
        {
            color = CRGB::Blue1;
        }

        for (int j = 0; j < size; j++)
        {
            leds[position + j] = color;
            leds[position - j] = color;
            FastLED.show();
            delay(delayTime);
        }

        delay(delayTime);
    }

    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Black;
        FastLED.show();
    }
}