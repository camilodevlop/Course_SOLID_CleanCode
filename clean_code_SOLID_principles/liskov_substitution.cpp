// Created by Camilo Castillo on 08/01/2024
// Liskov Substitution Principle (LSP)

#include <iostream>

using namespace std;

//------------------------------------------------------------------------------

class Bird
{
    public:
        virtual ~Bird() {};
};

//------------------------------------------------------------------------------

class FlyableBird: public Bird
{
    public:
        virtual void fly() const = 0;
        virtual ~FlyableBird() {};
};

class NonFlyableBird: public Bird
{
    public:
        virtual ~NonFlyableBird() {};
};

//------------------------------------------------------------------------------

class Duck: public FlyableBird
{
    public:
        void fly() const override { cout << "\n\tDuck flying" << endl; }
        ~Duck() {};
};

class Penguin: public NonFlyableBird
{
    public:
        ~Penguin() {};
};

//------------------------------------------------------------------------------

class BirdWatcher
{
    public:
        void watchBird(Bird& bird) const
        {
            cout << "\n\tWatching bird" << endl;
        }
};

//------------------------------------------------------------------------------

void watchBird(Bird& bird)
{
    cout << "\n\tWatching bird (both flyable and non)" << endl;
}

//------------------------------------------------------------------------------

int main()
{
    Duck duck;
    Penguin penguin;
    BirdWatcher birdWatcher;

    birdWatcher.watchBird(duck);
    birdWatcher.watchBird(penguin);

    watchBird(duck);
    watchBird(penguin);

    return 0;
}

//------------------------------------------------------------------------------
