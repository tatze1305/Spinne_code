#include "quadbug.h"

QuadBug::QuadBug(Leg &frontLeft, Leg &frontRight, Leg &backLeft, Leg &backRight) : frontLeft(frontLeft), frontRight(frontRight), backLeft(backLeft), backRight(backRight) {};

void QuadBug::forward(int speed) {
    this->normal();
    frontLeft.forward(speed);
    frontRight.forward(speed);
    backLeft.forward(speed);
    backRight.forward(speed);
    for(uint8_t i = 60; i < 90; i++)
    {
        frontLeft.move(i);
        frontRight.move(i);
        backLeft.move(i);
        backRight.move(i);
        delay(speed);
    }
}

void QuadBug::transport() {
    //frontLeft.transport();
    //frontRight.transport();
    //backLeft.transport();
    //backRight.transport();
}

void QuadBug::normal() {
    frontLeft.normal();
    frontRight.normal();
    backLeft.normal();
    backRight.normal();
}