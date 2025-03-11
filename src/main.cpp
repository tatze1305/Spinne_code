#include <Arduino.h>
#include <leg.h>
#include <axis.h>
#include <ESP32Servo.h>

Leg front_left(Axis(13, -10), Axis(0), Axis(0));


void setup() {
    Serial.begin(115200);

    pinMode(14, OUTPUT);
    digitalWrite(14, 1);
}


void loop() {
    yield();
};

/*
front_left.ax1(100);
front_right.ax1(90);
back_left.ax1(90);
back_right.ax1(90);

Leg front_left(15, 0, 0);

Leg front_right(14, 0, 0);

Leg back_left(27, 0, 0);

Leg back_right(26, 0, 0);
*/
