// Program to digital read from a switch with internal pull-up resistor



#define BAUDRATE 9600

// Assign _switch (underscore since switch is a keyword) alias to pin 2
#define _switch 2

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);

  // Configure pin to be a digital INPUT with internal PULLUP enabled
  pinMode(_switch,INPUT_PULLUP);
}

void loop() {
  // Read digital logic of the pin
  boolean state = digitalRead(_switch);

  // Print pin state
  Serial.println(state);
}
