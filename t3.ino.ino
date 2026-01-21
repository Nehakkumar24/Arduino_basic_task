int ledPin = 13;
int buttonPin = 2;

bool ledState = LOW;
bool lastButtonState = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool buttonState = digitalRead(buttonPin);

  // detect button press (HIGH → LOW)
  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;              // toggle LED
    digitalWrite(ledPin, ledState);
    delay(200);                        // debounce delay
  }

  lastButtonState = buttonState;
}
