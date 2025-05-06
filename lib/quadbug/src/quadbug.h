#ifndef QUADBUG_H
#define QUADBUG_H

#include "leg.h"

class QuadBug {
public:
    QuadBug(Leg &frontLeft, Leg &frontRight, Leg &backLeft, Leg &backRight);

    void forward(int speed = 40);
    void transport();
    void normal();
    //void backward();
    //void left();
    //void right();
    //void up();
    //void down();
    

private:
    Leg &frontLeft, &frontRight, &backLeft, &backRight;
};

#endif


