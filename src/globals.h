#include <Arduino.h>
#include <FastLED.h>
#include <stdlib.h>
#include <time.h>

#define DATA_PIN 9 // Arduino pin to which your LED strip is connected
#define NUM_LEDS 110 // Quantity of LEDs on your strip
#define COLOR_ORDER GRB // Color order(depends on your chipset)
#define BRIGHTNESS 60 // Decrease to reduce the current consumption
#define VOLTS 5 // Maximum voltage(depends on your chipset)
#define MAX_AMPS 500 // Maximum current. Do not set higher than your power supply can deliver
#define CHIPSET WS2811 // Your LED strip chipset

