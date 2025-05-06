#include "axis.h"

Axis::Axis(int _pin, int _offSet, bool _invert, int _hertz, int min, int max) : offSet(_offSet), invert(_invert)
{
    axis.setPeriodHertz(_hertz);
    axis.attach(_pin, min, max);
}

void Axis::move(int degrees)
{
    if(invert){
        axis.write(180 - (degrees + offSet));
        //Serial.println("Inverting");
    } else if(!invert) {
        axis.write(degrees + offSet);
        //Serial.println("Non Inverting");
    } else {
        Serial.println("Issue in Axis move");
    }
}

void Axis::show()
{
    
}