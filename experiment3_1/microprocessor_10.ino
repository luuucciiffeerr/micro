int button = 8;
int led = 7;
int buttonState = 0;
void setup() {
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}
void loop() {
buttonState = digitalRead(button);
if (buttonState == HIGH)  // pulldown
  {
  digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }
}