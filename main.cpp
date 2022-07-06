#include <Arduino.h>
int LED=13;


void setup()
{
  // Initialize LED pin as an output.
   pinMode(LED, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop()
{
  // Set the LED HIGH
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED, HIGH);
 
  // Wait for a second
  delay(1000);
 
  // Set the LED LOW
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED, LOW);
 
   // Wait for a second
  delay(1000);
}