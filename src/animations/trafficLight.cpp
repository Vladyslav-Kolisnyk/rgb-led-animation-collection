#include "globals.h"

void swithcEveryThree(CRGB leds[NUM_LEDS], CRGB color, int shift)
{
    for (int i = shift; i < NUM_LEDS; i = i + 3)
    {
        leds[i] = color;
    }
    FastLED.show();
}

void trafficLight(CRGB leds[NUM_LEDS])
{
    int delayTime = 250;
    for (int i = 0; i < 20; i++)
    {
        swithcEveryThree(leds, CRGB::Red1, 0);
        delay(delayTime);
        swithcEveryThree(leds, CRGB::Orange1, 1);
        delay(delayTime);
        swithcEveryThree(leds, CRGB::Black, 0);
        delay(delayTime);
        swithcEveryThree(leds, CRGB::Green1, 2);
        delay(delayTime);
        swithcEveryThree(leds, CRGB::Black, 1);
        delay(delayTime);
        swithcEveryThree(leds, CRGB::Black, 2);
    }
    FastLED.clear();
    FastLED.show();
}