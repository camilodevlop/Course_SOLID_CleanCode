#include <iostream>

using namespace std;

class Singleton
{
    public:
        static Singleton& getInstance()
        {
            static Singleton instance;
            cout << "Singleton instance created" << endl;
            return instance;
        }

        Singleton(Singleton const&) = delete;
        Singleton& operator=(Singleton const&) = delete;

        ~Singleton() {};
    
    private:
        Singleton() {};

};

//------------------------------------------------------------------------------

int main()
{
    Singleton& singleton = Singleton::getInstance();
    Singleton& singleton2 = Singleton::getInstance();

    cout << "\n\tSingleton:  " << &singleton 
         << "\n\tSingleton2: " << &singleton2 << endl;

    return 0;
}

//------------------------------------------------------------------------------
