// Program to analog read from a potentiometer



#define BAUDRATE 9600

// Assign potentiometer alias to pin A0
#define potentiometer A0

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);
}

void loop() {
  // Read analog voltage (value) of the pin
  uint16_t sensorReading = analogRead(potentiometer);

  // Print sensor reading
  Serial.println(sensorReading);

  // Pause all action for 10 milliseconds (0.01s)
  delay(10);
}
