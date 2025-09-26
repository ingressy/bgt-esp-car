#include <header.h>

#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("ESP32 Auto wird inizialsiert!");

    pins();
    Serial.println("Pins wurden erfolgreich festgelegt...");
    
}

void loop() {

}

