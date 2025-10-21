#include <iostream>
using namespace std;

// Base class
class Person {
    public:
        string Name = "Aash";  
        int DOB = 2007;      
        void DisplayPerson() {
            cout << "Birth Year: " << DOB << endl;
        }
};

// Base class
class Athlete {
    public:
        string sports_name = "Basketball";     
        string team_Name = "Team Dangerous";   
        void DisplayAthlete() {
            cout << "Team: " << team_Name << endl;
        }
};

// Derived class inheriting from both Person and Athlete
class SportsPerson : public Person, public Athlete {
    public:
        void showDetails() {
            cout << "Person Name: " << Person::Name << endl;     // Accessing Name from Person
            cout << "Sport: " << Athlete::sports_name << endl;         // Accessing sport from Athlete
        }
};

int main() {
    SportsPerson sp;
    sp.showDetails();       
    sp.DisplayPerson();    
    sp.DisplayAthlete();    
    return 0;
}