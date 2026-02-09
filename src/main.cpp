#include <Arduino.h>
int ldrPin = A0; // Pin number for the LED
void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin,INPUT); // Set the LED pin as an output

}

void loop() {
// write your code here
    int ldrValue = analogRead(ldrPin);
    int lightPercentage = map(ldrValue, 0,1023, 100, 0); // Map the LDR value to a percentage
    Serial.print("LDR Value: ");
    Serial.println(ldrValue); // Print the value to the Serial Monitor
    Serial.print(" | Light Percentage: ");
    Serial.print(lightPercentage); // Print the light percentage to the Serial Monitor
    Serial.println("%");
    delay(300); // Wait for 1 second before reading again
}