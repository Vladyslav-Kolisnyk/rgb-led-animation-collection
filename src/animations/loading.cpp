#include "globals.h"

void randomDelay()
{
    int delayTime = (rand() % 500) + 1;
    delay(delayTime);
}

void loading(CRGB leds[NUM_LEDS])
{
    int usedLeds = 0;

    int len;

    for (int i = 0; i < NUM_LEDS; i++)
    {
        leds[i] = CRGB::Wheat;
    }
    FastLED.show();

    while (usedLeds < NUM_LEDS)
    {
        len = (rand() % 10) + 1;
        
        for (int i = usedLeds; i < usedLeds + len; i++)
        {
            leds[i] = CRGB::Green1;
            FastLED.show();
            randomDelay();
        }
        usedLeds = usedLeds + len;
        randomDelay();
    }

    for (int i = 0; i < 3; i++)
    {
        FastLED.setBrightness(0);
        FastLED.show();
        randomDelay();
        FastLED.setBrightness(BRIGHTNESS);
        FastLED.show();
    }
    
    FastLED.clear();
    FastLED.show();
}