// Program to print "Hello World" to the Serial Monitor

#define BAUDRATE 9600

void setup() {
  Serial.begin(BAUDRATE);
}

void loop() {
  Serial.println("Hello World");

  delay(500);
}
