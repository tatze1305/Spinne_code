#include "axis.h"

Axis::Axis(int& _pin, int _offSet, int min, int max) : offSet(_offSet)
{
    axis.setPeriodHertz(50);
    axis.attach(_pin, min, max);
}

void Axis::move(int degrees)
{
    axis.write(degrees + offSet);
}