void setup() {
    Serial.begin(9600); //monitor rate
}

void loop() {
    Serial.println("microprocessor!"); //print the message
    delay(1000); // every one second
}