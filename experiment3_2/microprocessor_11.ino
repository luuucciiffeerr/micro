int button = 8;  //output number for button
int led = 7;  // LED
int buttonState; //=0;
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