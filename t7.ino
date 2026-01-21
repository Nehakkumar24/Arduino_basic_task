const int irPin = 2;
const int ledPin = 9;

void setup() {
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int irState = digitalRead(irPin);

  if (irState == LOW) {        // Object detected
    digitalWrite(ledPin, HIGH);
  } else {                     // No object
    digitalWrite(ledPin, LOW);
  }
}

