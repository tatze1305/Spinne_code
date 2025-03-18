#include "axis.h"

Axis::Axis(int _pin, int _offSet, int _hertz, int min, int max) : offSet(_offSet)
{
    axis.setPeriodHertz(_hertz);
    axis.attach(_pin, min, max);
}

void Axis::move(int degrees)
{
    axis.write(degrees + offSet);
}