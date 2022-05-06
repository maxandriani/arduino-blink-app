#include "arduino-blink-app.h";

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    blink(500);

    for (int i = 0; i < 100; i++)
    {
        blink(200);
        blink(400);
    }
    
    blink(10000);
}

void blink(int interval) {
    ledDown();
    delay(interval);
    ledUp();
    delay(interval);
}

void ledUp() {
    digitalWrite(LED_BUILTIN, HIGH);
}

void ledDown() {
    digitalWrite(LED_BUILTIN, LOW);
}
