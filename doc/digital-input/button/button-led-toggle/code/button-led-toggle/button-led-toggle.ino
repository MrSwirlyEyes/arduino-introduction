// Program to digital read from a button with an internal pull-up resistor
// and toggle an LED



#define button 2
#define led 3

static uint32_t timeStamp;
uint32_t debounceDelay = 10; // (ms)

void setup() {
  // Configure pin to be a digital INPUT_PULLUP
  pinMode(button,INPUT_PULLUP);

  // Configure pin to be a digital OUTPUT
  pinMode(led,OUTPUT);
}

void loop() {
  // Variables to keep track of state
  // (set to 1, since pull-up default state is HIGH)
  static boolean state = 1;
  static boolean lastState = 1;

  // Variable to keep track of the ledState
  static boolean ledState = 0;

  // Read digital logic of the pin
  boolean reading = digitalRead(button);

  // Record timeStamp whenever the current reading
  // differs from the last valid state change
  if (reading != lastState)
    timeStamp = millis();

  // Only register a valid state change
  // when the difference between the current time
  // and timeStamp is greater than the debounceDelay threshold
  if ((millis() - timeStamp) > debounceDelay) {
    // Check if the current reading differs from the current state
    if (reading != state) {
      // Set current state to the current reading
      state = reading;

      if (!state) {
        // Toggle LED state
        ledState = !ledState;

        // Write the state to the LED
        digitalWrite(led,ledState);
      }
    }
  }

  // Assign last state to the current reading
  lastState = reading;
}
