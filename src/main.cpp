#include <Arduino.h>

#include <ESP32Servo.h>

#include <leg.h>
#include <axis.h>
#include <quadbug.h>

/// Front Left
Axis fl_axis1(27); 
Axis fl_axis2(15);  
Axis fl_axis3(19); // Approx 
Leg front_left(fl_axis1, fl_axis2, fl_axis3);

// Front Right Leg (Jetzt wird sie mit Back Right vertauscht)
Axis fr_axis1(26);
Axis fr_axis2(33);
Axis fr_axis3(18); // Approx 
Leg front_right(fr_axis1, fr_axis2, fr_axis3);

// Back Left Leg (Jetzt wird es mit Front Left vertauscht)
Axis bl_axis1(13);
Axis bl_axis2(32, -10);
Axis bl_axis3(17); // Approx
Leg back_left(bl_axis1, bl_axis2, bl_axis3);

// Back Right
Axis br_axis1(14, 10);  
Axis br_axis2(25);  
Axis br_axis3(16);  // Approx
Leg back_right(br_axis1, br_axis2, br_axis3);





void setup() {
    Serial.begin(115200);


    back_left.normal();
    front_left.normal();
    back_right.normal();
    front_right.normal();

}

void loop() {
    back_left.forward();
    front_left.forward();
    back_right.forward();
    front_right.forward();
};
