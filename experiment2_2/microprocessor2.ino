int led1 = 13;  // output port number
int led2 = 7;	// output port number

void setup() {
pinMode(led1, OUTPUT);	/*  setuping the LEDs in the micro outputs */
pinMode(led2, OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
delay(5000); // 5 seconds delay 
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
delay(500); // .05 second delay
}