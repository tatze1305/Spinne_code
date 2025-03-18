#ifndef LEG_H
#define LEG_H

#include <ESP32Servo.h>
#include <axis.h>

class Leg
{
public:
    Leg(Axis &_axisPin1, Axis &_axisPin2, Axis &_axisPin3);

    void normal();

    void forward(int speed = 40);

    void test(int degrees);

private:
    Axis &axis1, &axis2, &axis3;
};

#endif  // LEG_H
