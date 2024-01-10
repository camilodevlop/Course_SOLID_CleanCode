// Created by Camilo Castillo on 08/01/2024
// Open-Close Principle (OCP)

#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------

class Shape
{
    public:
        virtual double area() const = 0;
        virtual ~Shape() {};
};

//------------------------------------------------------------------------------

class Rectangle: public Shape
{
    public:
        Rectangle(double width, double height): mWidth{width}, mHeight{height} {}
        double area() const override { return mWidth * mHeight; }

        ~Rectangle() {};

    private:
        double mWidth;
        double mHeight;
};


//------------------------------------------------------------------------------

class Circle: public Shape
{
    public:
        Circle(double radius): mRadius{radius} {}
        double area() const override { return mRadius * mRadius * 3.1416; }

        ~Circle() {};

    private:
        double mRadius;
};

//------------------------------------------------------------------------------

class AreaCalculator
{
    public:
        AreaCalculator() {};
        double sumAreas(vector<Shape*>& shapes)
        {
            double sum = 0;
            for (auto shape: shapes)
                sum += shape->area();
            return sum;
        }

        ~AreaCalculator() {};
};

//------------------------------------------------------------------------------

int main()
{
    Rectangle rectangle(2, 3);
    Circle circle(2);

    vector<Shape*> shapes {&rectangle, &circle};
    AreaCalculator areaCalculator;

    cout << "\n\tSum of areas: " << areaCalculator.sumAreas(shapes) << endl;

    return 0;
}

//------------------------------------------------------------------------------
