#include <Arduino.h> 
void setup() { // GPIO21 = LED_BUILTIN : LED embarquée de la XIAO ESP32-S3 
    pinMode(LED_BUILTIN, OUTPUT);   // configure la broche en sortie 
} 

void loop() { 
    digitalWrite(LED_BUILTIN, LOW);   // LED allumée (logique inversée) 
    delay(1000);                      // attente 1000 ms = 1 s 
    digitalWrite(LED_BUILTIN, HIGH);  // LED éteinte 
    delay(1000);                      // attente 1 s 
}