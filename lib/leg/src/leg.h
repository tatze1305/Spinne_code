#ifndef LEG_H
#define LEG_H

#include <ESP32Servo.h>


class Leg
{
public:
    Leg(int _axisPin1, int _axisPin2, int _axisPin3, int min = 500, int max = 2500);

    void normal();

    void forward();

    void ax1(int degrees);
    void ax2(int degrees);
    void ax3(int degrees);

    void setOffset1(int _offSet);
    void setOffset2(int _offSet);
    void setOffset3(int _offSet);

    void test(int degrees);

private:
    Servo axis1, axis2, axis3;
    int off1, off2, off3;
};

#endif  // LEG_H
