#include <math.h> // for sin and cos
const int numPoints = 360; //2pi
const float amplitude = 100;
const float offset = 512;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < numPoints; i++) { // strat form 1 to 360 
    float radians = i * (PI / 180); // convert to radian
    float sineValue = amplitude * sin(radians) + offset; // sin
    float cosValue = amplitude * cos(radians) + offset; // cos
    Serial.print(sineValue);
    Serial.print(","); // add a safe space to pervent form conflict 
    Serial.println(cosValue);
    delay(10);
    }
}