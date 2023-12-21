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

void Person::printPerson() const
{
    std::cout << "\nPerson:"
              << "\nName: " << mName 
              << "\nGender: " << mGender 
              << "\nBirthday: " << mBirthday
              << std::endl;
}

//------------------------------------------------------------------------------

class User: public Person
{
    public:
        string mUsername;
        string mPassword;

        User(string username = string(), string password = string(), Person person = Person()):
            mUsername{username}, mPassword{password} {}

        bool checkCredentials() const { return true; }

        ~User() {};
};

//------------------------------------------------------------------------------

class UserSettings: public User
{
    public:
        string mWorkingDirectory;
        string mLastOpenedFolder;

        UserSettings(string workingDirectory = string(), string lastOpenFolder = string(), User user = User()):
            mWorkingDirectory{workingDirectory}, mLastOpenedFolder{lastOpenFolder}{}

        ~UserSettings() {};
};

//------------------------------------------------------------------------------

int main()
{
    Person person("Camilo", MALE, "01/01/1990");
    person.printPerson();

    User username("CamiloA", "1234");

    UserSettings userSettings("C:/Users/CamiloA", "C:/Users/CamiloA/Downloads", username);

    userSettings.mBirthday = "01/01/1990";
    cout << "\n\n" << userSettings.mBirthday << endl;

    return 0;
}

//------------------------------------------------------------------------------
