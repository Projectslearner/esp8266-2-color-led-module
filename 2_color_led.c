/*
    Project name : ESP8266 2-color LED module
    Modified Date: 18-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-2-color-led-module
*/

const int redPin = D5;    // GPIO pin connected to the red LED anode
const int greenPin = D6;  // GPIO pin connected to the green LED anode

void setup() 
{
  pinMode(redPin, OUTPUT);    // Set red LED pin as OUTPUT
  pinMode(greenPin, OUTPUT);  // Set green LED pin as OUTPUT
}

void loop() {
  // Turn on red LED, turn off green LED
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000); // Wait for 1 second

  // Turn on green LED, turn off red LED
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(1000); // Wait for 1 second

  // Turn off both LEDs
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  delay(1000); // Wait for 1 second
}
