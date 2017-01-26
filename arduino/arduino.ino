/*
  Analog input, analog output, serial output

 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.

 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground

 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe

 This example code is in the public domain.

 */

// These constants won't change.  They're used to give names
// to the pins used:
const int light = A0;  // Analog input pin that the potentiometer is attached to
const int temp = A1;  // Analog input pin that the potentiometer is attached to
const int humid = A2;  // Analog input pin that the potentiometer is attached to


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  Serial.print(analogRead(light));
  Serial.print(",");
  Serial.print(analogRead(temp));
  Serial.print(",");
  Serial.println(analogRead(humid));

  delay(100);
}