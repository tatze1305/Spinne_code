#ifndef AXIS_H
#define AXIS_H

#include <ESP32Servo.h>

class Axis
{
public:
    Axis(int& _pin, int _offSet = 0, int min = 500, int max = 2500);

    void move(int degrees);

private:
    int offSet;
    Servo axis;
};

#endif