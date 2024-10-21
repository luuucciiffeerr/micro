int led1 = 13;  // output port number
int led2 = 7;

void setup() {
pinMode(led1, OUTPUT); // setuping LEDs
pinMode(led2, OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH); //LED1 is on
digitalWrite(led2, LOW);  //LED2 is off
delay(1000);
digitalWrite(led1, LOW);  //LED1 is off
digitalWrite(led2, HIGH);  //LED2 is on
delay(1000);
}
