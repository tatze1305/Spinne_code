#include <leg.h>


Leg::Leg(int _axisPin1, int _axisPin2, int _axisPin3, int min, int max){
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);

    axis1.setPeriodHertz(50);
    axis2.setPeriodHertz(50);
    axis3.setPeriodHertz(50);

    axis1.attach(_axisPin1, min, max);
    axis2.attach(_axisPin2, min, max);
    axis3.attach(_axisPin3, min, max);
}

void Leg::normal()
{
    axis1.write(90 + off1);
    axis2.write(60 + off2);
    axis3.write(125 + off3);
}

void Leg::forward()
{
    int _axis1Counter = 90;
    int _axis2counter = 60;

    while((_axis1Counter >= 2) && (_axis2counter >= 60))
    {
        axis1.write(_axis1Counter + off1);
        axis2.write(_axis2counter + off2);
        
        _axis1Counter -= 2;
        
        if(_axis1Counter >= 44)
        {
            _axis2counter += 2;
        } else if(_axis1Counter < 44) {
            _axis2counter -= 2;
        }
        delay(40);
    }

    while(_axis1Counter < 90)
    {
        axis1.write(_axis1Counter + off1);
        _axis1Counter++;
        delay(20);
    }
}

void Leg::setOffset1(int _offSet){off1 = _offSet;}

void Leg::setOffset2(int _offSet){off2 = _offSet;}

void Leg::setOffset3(int _offSet){off3 = _offSet;}


void Leg::test(int degrees)
{
    Serial.println(degrees + off1);
}

// ------ FOR TESTING PURPOSES ----------------

void Leg::ax1(int degrees)
{
    axis1.write(degrees);
}

void Leg::ax2(int degrees)
{
    axis2.write(degrees);
}

void Leg::ax3(int degrees)
{
    axis3.write(degrees);
}