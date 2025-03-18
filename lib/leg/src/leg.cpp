#include <leg.h>


Leg::Leg(Axis &_axisPin1, Axis &_axisPin2, Axis &_axisPin3) : axis1(_axisPin1), axis2(_axisPin2), axis3(_axisPin3)
{
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);
}

void Leg::normal()
{
    axis1.move(90);
    axis2.move(60);
    axis3.move(125);
    Serial.println("Written");
}

void Leg::forward(int speed)
{
    uint8_t _axis1Counter = 90;
    uint8_t _axis2counter = 60;

    while((_axis1Counter >= 2) && (_axis2counter >= 60))
    {
        axis1.move(_axis1Counter);
        axis2.move(_axis2counter);
        
        _axis1Counter -= 2;
        
        if(_axis1Counter >= 44)
        {
            _axis2counter += 2;
        } else if(_axis1Counter < 44) {
            _axis2counter -= 2;
        }
        delay(speed);
    }
}

void Leg::test(int degrees)
{
    Serial.println(degrees);
}
