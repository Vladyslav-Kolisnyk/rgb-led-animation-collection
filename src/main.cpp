#include "globals.h"

#include "animations/snake.h"
#include "animations/colorWave.h"
#include "animations/bricks.h"
#include "animations/sparks.h"
#include "animations/randomMess.h"
#include "animations/shift.h"
#include "animations/lava.h"
#include "animations/breaker.h"
#include "animations/chain.h"
#include "animations/trafficLight.h"
#include "animations/breathing.h"

CRGB leds[NUM_LEDS];

void setup() 
{
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(VOLTS, MAX_AMPS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
  FastLED.show();
  srand(time(NULL));
}

void loop() 
{
  breathing(leds);
  trafficLight(leds);
  chain(leds);
  breaker(leds);
  lava(leds);
  snake(leds);
  colorWave(leds);
  bricks(leds);
  sparks(leds);
  randomMess(leds);
  shift(leds);
} 