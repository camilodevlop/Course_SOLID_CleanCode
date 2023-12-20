#include <iostream>

using namespace std;

enum Gender{ MALE, FEMALE};

class Person
{

    public:
        string mName;
        Gender mGender;
        string mBirthday;

        Person(string name = string(), Gender gender = FEMALE, string birthday = "01/01/1950"):
            mName{name}, mGender{gender}, mBirthday{birthday} {}
        
        void printPerson() const;

        ~Person() {};
};

//------------------------------------------------------------------------------

void Person::printPerson() const
{
    std::cout << "\nPerson:"
              << "\nName: " << mName 
              << "\nGender: " << mGender 
              << "\nBirthday: " << mBirthday
              << std::endl;
}

//------------------------------------------------------------------------------

int main()
{
    Person person("Camilo", MALE, "01/01/1990");
    person.printPerson();

    return 0;
}

//------------------------------------------------------------------------------
