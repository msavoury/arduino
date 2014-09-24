/*
 * Simple example that lights up 3 LEDs
 */
const unsigned int LED_PIN_1 = 12;
const unsigned int LED_PIN_2 = 11;
const unsigned int LED_PIN_3 = 10;

void setup() {
	// put your setup code here, to run once:
	pinMode(LED_PIN_1, OUTPUT);
	pinMode(LED_PIN_2, OUTPUT);
	pinMode(LED_PIN_3, OUTPUT);
	digitalWrite(LED_PIN_1, HIGH);
	digitalWrite(LED_PIN_2, HIGH);
	digitalWrite(LED_PIN_3, HIGH);
}

void loop() {
}

