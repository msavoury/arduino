/*
   Blink
   Turns on an LED on for one second, then off for one second, repeatedly.

   Most Arduinos have an on-board LED you can control. On the Uno and
   Leonardo, it is attached to digital pin 13. If you're unsure what
   pin the on-board LED is connected to on your Arduino model, check
   the documentation at http://arduino.cc

   This example code is in the public domain.

   modified 8 May 2014
   by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
	pulseLoop(13, 100, 3);
	pulseLoop(13, 200, 3);
	pulseLoop(13, 100, 3);
}

/**
 * Turn on and off pin for given milliseconds
 */
void pulse(int pinNumber, int milli) {
	digitalWrite(pinNumber, HIGH);
	delay(milli);
	digitalWrite(pinNumber, LOW);
	delay(milli);
}

void pulseLoop(int pinNumber, int milli, int count) {
	while (count > 0 ) {
		digitalWrite(pinNumber, HIGH);
		delay(milli);
		digitalWrite(pinNumber, LOW);
		delay(milli);
		count = count - 1;
	}
}
