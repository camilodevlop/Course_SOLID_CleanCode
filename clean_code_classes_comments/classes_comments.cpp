#include <iostream>

using namespace std;

enum Gender{ MALE, FEMALE};

//------------------------------------------------------------------------------

class PersonProps
{
    public:
        string mName;
        Gender mGender;
        string mBirthday = string();

        PersonProps(string name, Gender gender):
                    mName{name}, mGender{gender} {}

        ~PersonProps() {};
};

class Person: public PersonProps
{
    public:
        Person(string name = string(), Gender gender = FEMALE): 
               PersonProps{name, gender} {};

        ~Person() {};
};

//------------------------------------------------------------------------------

class UserProps: public Person
{
    public:
        string mUsername;
        string mPassword;

        UserProps(Person person, string username, string password): Person{person},
                  mUsername{username}, mPassword{password} {}

        ~UserProps() {};
};

class User: public UserProps
{
    public:
        User(Person person = Person(), string username = string(),
             string password = string()): UserProps{person, username, password} {}

        ~User() {};
};

//------------------------------------------------------------------------------

class UserSettingsProps: public User
{
    public:
        string mWorkingDirectory;
        string mLastOpenedFolder;

        UserSettingsProps(User user, string workingDirectory, string lastOpenFolder):
                          User{user}, mWorkingDirectory{workingDirectory},
                          mLastOpenedFolder{lastOpenFolder} {}

        ~UserSettingsProps() {};
};

class UserSettings: public UserSettingsProps
{
    public:
        UserSettings(User user = User(), string workingDirectory = string(),
                     string lastOpenFolder = string()):
                     UserSettingsProps{user, workingDirectory, lastOpenFolder} {}

        ~UserSettings() {};
};

//------------------------------------------------------------------------------

int main()
{
    Person person("Camilo", MALE);
    person.mBirthday = "01/01/1990";
    cout << "\n\n" << person.mBirthday << endl;

    User user(person, "CamiloA", "1234");
    UserSettings userSettings(user, "C:/Users/CamiloA", "C:/Users/CamiloA/Downloads");

    cout << "\n\n" << userSettings.mName << endl;

    return 0;
}

//------------------------------------------------------------------------------
