#ifndef AXIS_H
#define AXIS_H

#include <ESP32Servo.h>

class Axis
{
public:
    Axis(int _pin, int _offSet = 0, bool _invert = false, int _hertz = 50, int min = 500, int max = 2500);

    void move(int degrees);

    void show();

private:
    bool invert;
    int offSet;
    Servo axis;
};

#endif