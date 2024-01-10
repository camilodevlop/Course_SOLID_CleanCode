// Created by Camilo Castillo on 09/01/2024
// Dependency Inversion Principle (DIP)

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

class Switchable
{
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;

        virtual ~Switchable() {};
};

//------------------------------------------------------------------------------

class Light: public Switchable
{
    public:
        void turnOn() override { cout << "\n\tLight turned on" << endl; }
        void turnOff() override { cout << "\n\tLight turned off" << endl; }

        ~Light() {};
};

//------------------------------------------------------------------------------

class Fan: public Switchable
{
    public:
        void turnOn() override { cout << "\n\tFan turned on" << endl; }
        void turnOff() override { cout << "\n\tFan turned off" << endl; }

        ~Fan() {};
};

//------------------------------------------------------------------------------

int main()
{
    Light light;
    Fan fan;

    light.turnOn();
    light.turnOff();

    fan.turnOn();
    fan.turnOff();

    return 0;
}

//------------------------------------------------------------------------------
