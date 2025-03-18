#include <Arduino.h>
#include <leg.h>
#include <axis.h>
#include <ESP32Servo.h>


// Front Left Leg
Axis fl_axis1(13);
Axis fl_axis2(32); // Finished
Axis fl_axis3(0);
Leg front_left(fl_axis1, fl_axis2, fl_axis3);

// Front Right Leg
Axis fr_axis1(14, 10);
Axis fr_axis2(25); // Finished
Axis fr_axis3(0);
Leg front_right(fr_axis1, fr_axis2, fr_axis3);

// Back Left Leg
Axis bl_axis1(27);
Axis bl_axis2(15); // Finished
Axis bl_axis3(0);
Leg back_left(bl_axis1, bl_axis2, bl_axis3);

// Back Right Leg
Axis br_axis1(26);
Axis br_axis2(33);
Axis br_axis3(0);
Leg back_right(br_axis1, br_axis2, br_axis3);

Servo test;



void setup() {
    Serial.begin(115200);

    
}

void loop() {

    back_right.forward();
    
    //front_left.forward();
    //front_right.forward();
    //back_left.forward();
};
