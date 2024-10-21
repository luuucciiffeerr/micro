const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char inputLed = Serial.read();
    if (inputLed == 'h' || inputLed == 'H') {  // we do this to remove the casesensetive promblem from inputs// 
      digitalWrite(led, HIGH); // on
    } else if (inputLed == 'l' || inputLed == 'L') {
      digitalWrite(led, LOW); // off
    }
  }
}