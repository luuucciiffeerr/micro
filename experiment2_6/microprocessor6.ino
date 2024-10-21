const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    int inputLed = Serial.parseInt(); // reading numbers from input
    if (inputLed == 101) {
      digitalWrite(led, HIGH); //on
    } else if (inputLed == 201) {
      digitalWrite(led, LOW); //off
    }
  }
}