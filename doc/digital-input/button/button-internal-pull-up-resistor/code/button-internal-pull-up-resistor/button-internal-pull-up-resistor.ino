// Program to digital read from a button with internal pull-up resistor



#define BAUDRATE 9600

// Assign button alias to pin 2
#define button 2

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);

  // Configure pin to be a digital INPUT with internal PULLUP enabled
  pinMode(button,INPUT_PULLUP);
}

void loop() {
  // Read digital logic of the pin
  boolean state = digitalRead(button);

  // Print pin state
  Serial.println(state);
}
