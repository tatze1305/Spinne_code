#include <Arduino.h>

#include <ESP32Servo.h>

#include <leg.h>
#include <axis.h>
#include <quadbug.h>

///*
Axis fl_axis1(27, 0);
Axis fl_axis2(15);
Axis fl_axis3(19);
Leg front_left(fl_axis1, fl_axis2, fl_axis3);

Axis fr_axis1(26, 0, true);
Axis fr_axis2(33);
Axis fr_axis3(18); 
Leg front_right(fr_axis1, fr_axis2, fr_axis3);

Axis bl_axis1(13);
Axis bl_axis2(32);
Axis bl_axis3(17);
Leg back_left(bl_axis1, bl_axis2, bl_axis3);

Axis br_axis1(14, 0, true);  
Axis br_axis2(25, 10);  
Axis br_axis3(16, -10);
Leg back_right(br_axis1, br_axis2, br_axis3);

QuadBug Spider(front_left, front_right, back_left, back_right);
//*/
void setup() {
    Serial.begin(115200);

    //back_right.forward(500);

    Spider.forward();
}



void loop() {
    yield();
};
