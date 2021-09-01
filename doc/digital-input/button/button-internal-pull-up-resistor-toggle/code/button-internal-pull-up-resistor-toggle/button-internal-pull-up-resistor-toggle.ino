// Program to digital read from a button with an external pull-down resistor and toggle a state



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
  static boolean state = 1;
  static boolean lastState = 1;

  // Can assign a boolean, string, integer, etc.
  static boolean _status = 1;

  // Read digital logic of the pin
  boolean reading = digitalRead(button);

  // Check if the current reading differs from the current state
  if (reading != state) {
    // Set current state to the current reading
    state = reading;

    // If button is HIGH/pressed, toggle status
    if (state) {
      _status = !_status;

      // Perform action at time of state toggle
      Serial.println(_status);
    }
  }

  // Perform continuous action based on toggle state
  // ...

  // Assign last state to the current reading
  lastState = reading;
}
