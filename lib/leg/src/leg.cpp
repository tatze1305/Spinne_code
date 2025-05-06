#include <leg.h>


Leg::Leg(Axis &_axis1, Axis &_axis2, Axis &_axis3) : axis1(_axis1), axis2(_axis2), axis3(_axis3)
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
}

void Leg::forward(int speed)
{
    axis3.move(125);
    uint8_t _axis1Counter = 90;
    uint8_t _axis2Counter = 60;

    for(_axis1Counter; _axis1Counter > 60; _axis1Counter--)
    {
        axis1.move(_axis1Counter);
        axis2.move(_axis2Counter);

        Serial.print("Axis 1:");
        Serial.println(_axis1Counter);
        Serial.print("Axis 2:");
        Serial.println(_axis2Counter);
        Serial.println("----------------");
        
        _axis2Counter += 1;
        delay(speed);
    }
    for(_axis1Counter; _axis1Counter >= 30; _axis1Counter--) // Nicht ändern _axis1Counter < 0 --> 254 !!! 
    {
        axis1.move(_axis1Counter);
        axis2.move(_axis2Counter);
        _axis2Counter -= 1;
        delay(speed);
    }
}

void Leg::move(int degrees)
{
    axis1.move(degrees);
}

void Leg::transport()
{
        axis1.move(30);
        axis2.move(140);
        axis3.move(90);
}
