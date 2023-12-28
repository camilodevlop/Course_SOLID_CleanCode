#include <iostream>

using namespace std;

enum Gender{MALE, FEMALE};

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

class UserProps
{
    public:
        string mUsername;
        string mPassword;

        UserProps(string username, string password): mUsername{username},
                  mPassword{password} {}

        ~UserProps() {};
};

class User: public UserProps
{
    public:
        User(string username = string(), string password = string()):
             UserProps{username, password} {}

        ~User() {};
};

//------------------------------------------------------------------------------

class SettingsProps
{
    public:
        string mWorkingDirectory;
        string mLastOpenedFolder;

        SettingsProps(string workingDirectory, string lastOpenFolder):
                          mWorkingDirectory{workingDirectory},
                          mLastOpenedFolder{lastOpenFolder} {}

        ~SettingsProps() {};
};

class Settings: public SettingsProps
{
    public:
        Settings(string workingDirectory = string(), string lastOpenFolder = string()):
                 SettingsProps{workingDirectory, lastOpenFolder} {}

        ~Settings() {};
};

//------------------------------------------------------------------------------

class UserSettings
{
    public:
        Person mPerson;
        User mUser;
        Settings mSettings;

        UserSettings(Person person, User user, Settings settings):
                     mPerson{person}, mUser{user}, mSettings{settings} {}

        ~UserSettings() {};
};

//------------------------------------------------------------------------------

int main()
{
    Person person("Camilo", MALE);
    User user("CamiloA", "1234");
    Settings settings("C:/Users/CamiloA", "C:/Users/CamiloA/Downloads");

    UserSettings userSettings(Person{"Camilo", MALE} , User{"CamiloA", "1234"},
                              Settings{"C:/Users/CamiloA", "C:/Users/CamiloA/Downloads"});

    userSettings.mPerson.mBirthday = "01/01/1990";

    cout << "\n\n" << userSettings.mPerson.mName << endl;
    cout << userSettings.mPerson.mGender << endl;
    cout << userSettings.mPerson.mBirthday << endl;

    return 0;
}

//------------------------------------------------------------------------------
