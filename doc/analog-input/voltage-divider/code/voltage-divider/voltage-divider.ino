// Program to analog read from a voltage-divider



#define BAUDRATE 9600

// Assign voltageDivider alias to pin A0
#define voltageDivider A0

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);
}

void loop() {
  // Read voltage of the pin
  uint16_t reading = analogRead(voltageDivider);

  // Print reading
  Serial.println(reading);

  // Pause all action for 10 milliseconds (0.01s)
  delay(10);
}
