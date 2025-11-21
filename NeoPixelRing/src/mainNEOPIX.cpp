#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h> // Required for 16 MHz Adafruit Trinket  
#endif
#define NUMPIXELS 16      // total no. LEDs to be activated in Ring (RHS-LHS anticlockwise) (16 max.)
#define LED_PIN   6   // Pin where NeoPixel is connected

Adafruit_NeoPixel ring(NUMPIXELS, LED_PIN, NEO_GRBW + NEO_KHZ800);
#define DELAYVAL 500 // delay for half a second

void setup() {
  ring.begin();
  ring.show();  // Initialize all pixels to 'off'
  ring.setBrightness(255); // overall brightness (0-255)


  // Set all LEDs to a color
  uint8_t r = 0;  // Red value (0-255)
  uint8_t g = 0;  // Green value (0-255)
  uint8_t b = 0;  // Blue value (0-255)
  uint8_t w = 0; // White value (0-255)

  for (int i = 0; i < NUMPIXELS; i++) {
    ring.setPixelColor(i, ring.Color(r, g, b, w)); // Set pixel color
  } 
  ring.show(); // Update ring to show new colors
}
void loop() {
  // option for creating animations or changing colors can be added here
}


