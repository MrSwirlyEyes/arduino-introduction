// Program to digital read from a pin configured as INPUT left floating



#define BAUDRATE 9600

// Assign pin alias to pin 2
#define pin 2

void setup() {
  // Start Serial Monitor
  Serial.begin(BAUDRATE);

  // Configure pin to be a digital INPUT
  pinMode(pin,INPUT);
}

void loop() {
  // Read digital logic of the pin
  boolean state = digitalRead(pin);

  Serial.println(state);
}
