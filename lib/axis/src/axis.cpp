#include "axis.h"

Axis::Axis(int _pin, int _offSet) :pin(_pin), offSet(_offSet){}

void Axis::move(int degrees)
{
    axis.write(degrees);
}