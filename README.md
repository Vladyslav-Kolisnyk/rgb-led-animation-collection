# RGB LED Animations Collection
My small collection of animations for addressable LED strips. Made just for fun.

**Built with:**
- [PlatformIO](https://platformio.org/)
- [FastLED](https://fastled.io/)

## Usage
To use the collection, update the `globals.h` first.
```
#define DATA_PIN 9 // Arduino pin to which your LED strip is connected
#define NUM_LEDS 110 // Quantity of LEDs on your strip
#define COLOR_ORDER GRB // Color order(depends on your chipset)
#define BRIGHTNESS 60 // Decrease to reduce current consumption
#define VOLTS 5 // Maximum voltage(depends on your chipset)
#define MAX_AMPS 500 // Maximum current. Do not set higher than your power supply can deliver
#define CHIPSET WS2811 // Your LED strip chipset
```

Then just include the animation.
```
// Including animation files
#include "animations/snake.h"
```

And run the function by passing your LEDs array.
```
// Example animation usage
snake(leds);
```
