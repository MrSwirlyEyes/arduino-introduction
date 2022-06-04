// Program to blink an array of leds
//
// Blinks/toggles an array of LEDs ON and OFF



// Total number of LEDs
#define NUM_LEDS 10

// Assign led aliases
#define led1   2
#define led2   3
#define led3   4
#define led4   5
#define led5   6
#define led6   7
#define led7   8
#define led8   9
#define led9  10
#define led10 11

// Define LED array
byte leds[NUM_LEDS] = {
  led1,
  led2,
  led3,
  led4,
  led5,
  led6,
  led7,
  led8,
  led9,
  led10
};

void setup() {
  // Configure ALL led pins to be a digital OUTPUT
  for(int i = 0; i < NUM_LEDS; i++) {
    pinMode(leds[i],OUTPUT);
  }
}

void loop() { 
  // Write all LEDs HIGH/ON
  for(int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i],HIGH);

    delay(50);
  }

  delay(500);

  // Write all LEDs LOW/OFF
  for(int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i],LOW);

    delay(50);
  }

  delay(500);
}
