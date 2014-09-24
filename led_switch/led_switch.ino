const unsigned int LED_PIN = 13;
const unsigned int BAUD_RATE = 9600;
int milli = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(BAUD_RATE);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
	  int command = Serial.read();
	  if (command == '1') {
		  Serial.println("Turn Up!");
		  increaseRate(10);
	  }
	  else if (command == '2') {
		  Serial.println("Turn Down");
		  decreaseRate(10);
	  }
	  else {
		  Serial.print("Unknown Command: ");
		  Serial.write(command);
	  }
  }
  pulse(LED_PIN, milli);
}

void increaseRate(int amount) {
	if (milli - amount > 0) {
		milli = milli - amount;
	}
}

void decreaseRate(int amount) {
	milli = milli + amount;
}

void pulse(int pinNumber, int milli) {
	digitalWrite(pinNumber, HIGH);
	delay(milli);
	digitalWrite(pinNumber, LOW);
	delay(milli);
}
