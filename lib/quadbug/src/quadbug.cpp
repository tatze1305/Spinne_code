#include "quadbug.h"

QuadBug::QuadBug(Leg &frontLeft, Leg &frontRight, Leg &backLeft, Leg &backRight) : frontLeft(frontLeft), frontRight(frontRight), backLeft(backLeft), backRight(backRight) {};

void QuadBug::forward() {
    frontLeft.forward();
    frontRight.forward();
    backLeft.forward();
    backRight.forward();
}
