int ledPin = 3;    // LED connected to digital pin 9
int fadeRate = 1;
int fadeDelay = 3;

void setup() {
  // nothing happens in setup
}


void loop() {
  // fade in from min to max in increments of fadeRate:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += fadeRate) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for fadeDelay milliseconds to see the dimming effect
    delay(fadeDelay);
  }

  // fade out from max to min in increments of fadeRate:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= fadeRate) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for fadeDelay milliseconds to see the dimming effect
    delay(fadeDelay);
  }
}

