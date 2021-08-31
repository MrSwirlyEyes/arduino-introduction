// Program to analog read from a light-dependent-resistor (LDR)



#define BAUDRATE 9600

// Assign ldr alias to pin A0
#define ldr A0

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);
}

void loop() {
  // Read voltage of the pin
  uint16_t reading = analogRead(ldr);

  // Print reading
  Serial.println(reading);

  // Pause all action for 10 milliseconds (0.01s)
  delay(10);
}
