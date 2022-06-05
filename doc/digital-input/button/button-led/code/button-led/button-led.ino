// Program to digital read from a button with internal pull-up resistor



#define BAUDRATE 9600

#define button 2
#define led 3

void setup() {
  // Configure pin to be a digital INPUT_PULLUP
  pinMode(button,INPUT_PULLUP);

  // Configure pin to be a digital OUTPUT
  pinMode(led,OUTPUT);
}

void loop() {
  // Read digital logic of the pin
  // Invert result because of the internal pull-up resistor
  boolean state = !digitalRead(button);

  // Print pin state
  digitalWrite(led,state);
}
