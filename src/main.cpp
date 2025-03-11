#include <Arduino.h>
#include <leg.h>
#include <axis.h>
#include <ESP32Servo.h>


Leg front_left(15, 0, 0);

Leg front_right(14, 0, 0);

Leg back_left(27, 0, 0);

Leg back_right(26, 0, 0);

void setup() {
    Serial.begin(115200);
    front_left.setOffset1(-10);
    front_left.test(90);
}


void loop() {
    yield();
};

/*
front_left.ax1(100);
front_right.ax1(90);
back_left.ax1(90);
back_right.ax1(90);
*/
