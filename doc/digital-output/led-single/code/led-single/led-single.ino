// Program to blink an led
//
// Blinks/toggles an LED ON and OFF



// Assign led alias to pin 2
#define led 2

void setup() {
  // Configure led pin to be a digital OUTPUT
  pinMode(led,OUTPUT);
}

void loop() {
  // Write digital logic level HIGH to led pin (+5V)
  digitalWrite(led,HIGH);

  // Pause all action for 500 milliseconds (0.5s)
  delay(500);

  // Write digital logic level LOW to led pin (0V - GND)
  digitalWrite(led,LOW);

  // Pause all action for 500 milliseconds (0.5s)
  delay(500);
}