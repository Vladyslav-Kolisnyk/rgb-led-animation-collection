#include "globals.h"

void meteor(CRGB leds[NUM_LEDS])
{
    int len = 7;
    int delayTime = 30;

    for (int j = 0; j < 5; j++)
    {
        for (int j = 0; j < NUM_LEDS; j++)
        {
            leds[j] = CRGB::OrangeRed;
            for (int k = 1; k < 6; k++) 
            {
                leds[j - (len - k)] = blend(CRGB::OrangeRed, CRGB::Black, 250 - 10 * j);
            }
            leds[j - len] = CRGB::Black;
            FastLED.show();
            delay(delayTime);
        }

        for (int j = NUM_LEDS; j > 0; j--)
        {
            leds[j] = CRGB::OrangeRed;
            for (int k = 1; k < 6; k++) 
            {
                leds[j + (len - k)] = blend(CRGB::OrangeRed, CRGB::Black, 250 - 10 * j);
            }
            leds[j + len] = CRGB::Black;
            FastLED.show();
            delay(delayTime);
        }
    }
        
    
}