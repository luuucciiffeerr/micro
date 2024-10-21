int button = 8;
int led = 7;
int buttonState;
void setup() {
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}
void loop() {
buttonState = digitalRead(button);
if (buttonState == LOW)   // pullup
  {
  digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}