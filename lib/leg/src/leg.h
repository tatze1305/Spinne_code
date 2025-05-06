#ifndef LEG_H
#define LEG_H

#include <ESP32Servo.h>
#include <axis.h>

class Leg
{
public:
    Leg(Axis &_axis1, Axis &_axis2, Axis &_axis3);

    void normal();

    void forward(int speed = 40);

    void move(int degrees);

    void transport();

private:
    Axis &axis1, &axis2, &axis3;
};

#endif  // LEG_H
