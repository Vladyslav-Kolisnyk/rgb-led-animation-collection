#include "globals.h"

// Including animation files
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
#include "animations/noise.h"
#include "animations/noise.h"
#include "animations/pulse.h"
#include "animations/tetris.h"
#include "animations/meteor.h"

CRGB leds[NUM_LEDS]; // Intializing your LEDs array

void setup() 
{
  // Basic LED strip setup
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS); // Initializing LED strip
  FastLED.setMaxPowerInVoltsAndMilliamps(VOLTS, MAX_AMPS); // Setting maximum voltage and current
  FastLED.setBrightness(BRIGHTNESS); // Setting brightness
  FastLED.clear();
  FastLED.show();

  srand(time(NULL));
}

void loop() 
{
  // Example animation usage
  meteor(leds);
  tetris(leds);
  pulse(leds);
  noise(leds);
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