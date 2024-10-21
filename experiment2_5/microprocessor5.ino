const int led = 8;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) { // check if there is any input yet
    String inputLed = Serial.readString(); // reading the input 
    if (inputLed == 'on') {
      digitalWrite(led, HIGH); // on
    } else if (inputLed == 'off') {
      digitalWrite(led, LOW);  // off
    }
  }
}