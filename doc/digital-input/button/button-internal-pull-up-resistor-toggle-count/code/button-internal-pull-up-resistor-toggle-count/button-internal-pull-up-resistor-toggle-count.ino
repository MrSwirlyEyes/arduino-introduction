// Program to digital read from a button with an internal pull-up resistor and toggle a state



#define BAUDRATE 9600

// Assign button alias to pin 2
#define button 2

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);

  // Configure pin to be a digital INPUT
  pinMode(button,INPUT_PULLUP);
}

void loop() {
  // Variables to keep track of state (set to 1, since pull-up default state is HIGH)
  static boolean state = 1;
  static boolean lastState = 1;

  // Can assign a boolean, string, integer, etc.
  static uint8_t count = 0;

  // Read digital logic of the pin
  boolean reading = digitalRead(button);

  // Check if the current reading differs from the current state
  if (reading != state) {
    // Set current state to the current reading
    state = reading;

    // If button is LOW/pressed, toggle status
    if (!state) {
      count++;

      // Perform action at time of state toggle
      Serial.println(count);
    }
  }

  // Perform continuous action based on toggle state
  // ...

  // Assign last state to the current reading
  lastState = reading;
}
