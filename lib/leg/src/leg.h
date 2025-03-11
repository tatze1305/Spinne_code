#ifndef LEG_H
#define LEG_H

#include <ESP32Servo.h>

#include <axis.h>


class Leg
{
public:
    Leg(Axis const& _axisPin1, Axis const& _axisPin2, Axis const& _axisPin3);

    void normal();

    void forward();

    void test(int degrees);

private:
    Axis axis1, axis2, axis3;
};

#endif  // LEG_H
