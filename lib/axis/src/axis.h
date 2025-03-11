#ifndef AXIS_H
#define AXIS_H

#include <ESP32Servo.h>

class Axis
{
public:
    Axis(int _pin, int _offSet);

    void move(int degrees);

private:
    int pin, offSet;
    Servo axis;

};

#endif