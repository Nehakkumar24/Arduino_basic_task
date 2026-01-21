const int buttonPin = 2;
const int irPin = 3;
const int ledPin = 9;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);
  bool irState = digitalRead(irPin);

  if (buttonState == LOW && irState == LOW) {
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW);
  }
}

