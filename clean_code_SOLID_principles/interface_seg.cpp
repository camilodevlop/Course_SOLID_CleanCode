// Created by Camilo Castillo on 09/01/2024
// Interface Segregation Principle (ISP)

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

class TwoDimensionalShape
{
    public:
        virtual double area() const = 0;
        virtual ~TwoDimensionalShape() {};
};

//------------------------------------------------------------------------------

class ThreeDimensionalShape
{
    public:
        virtual double volume() const = 0;
        virtual double area() const = 0;

        virtual ~ThreeDimensionalShape() {};
};


//------------------------------------------------------------------------------

class Square: public TwoDimensionalShape
{
    public:
        Square(double side): mSide{side} {}
        double area() const override { return mSide * mSide; }

        ~Square() {};

    private:
        double mSide;
};

//------------------------------------------------------------------------------

class Sphere: public ThreeDimensionalShape
{
    public:
        Sphere(double radius): mRadius{radius} {}
        double volume() const override { return 4.0/3.0 * 3.1416 * mRadius * mRadius * mRadius; }
        double area() const override { return 4.0 * 3.1416 * mRadius * mRadius; }

        ~Sphere() {};

    private:
        double mRadius;
};

//------------------------------------------------------------------------------

int main()
{
    Square square(5);
    Sphere sphere(10);

    cout << "\n\tsquare area: " << square.area() << endl;
    cout << "\n\tsphere volume: " << sphere.volume()
         << "\n\tsphere area: " << sphere.area() << endl;

    return 0;
}

//------------------------------------------------------------------------------
