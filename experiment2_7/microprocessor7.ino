float num1; // first num
float num2; // second num	
char operator; 
float result;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    num1 = Serial.parseFloat(); // reading first number
    operator = Serial.read();  // reading one of 4 chars
    num2 = Serial.parseFloat(); // reading number two

  switch(operator) {
    case '+' : result = num1 + num2; 
    break;
    case '-' : result = num1 - num2; 
    break;
    case '*' : result = num1 * num2;  
    break;
    case '/' :
    if (num2 != 0) { // cheack for 0 in second number
     result = num1 / num2;
    }
	else {
		result = -1;
	}
    break;
  }
  
   Serial.print(result);
  }
}
