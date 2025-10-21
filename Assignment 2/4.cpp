#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
    private:
        string name;  
        int age;      
    public:
        void setPerson(string n, int a) {
            this->name = n;
            this->age = a;
        }

        void display() const {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

// Derived class employee inheritents from Person
class Employee : public Person {
    private:
        string empID;   
        string dept;    

    public:
        void setEmployee(string ID, string d) {
            this->empID = ID;
            this->dept = d;
        }

        void display() const {
            Person::display(); //Calls Person display
            cout << "Employee ID: " << empID << ", Department: " << dept << endl;
        }
};

// Derived class manager inheritents from Employee
class Manager : public Employee {
    private:
        int tSize;  //teamsize

    public:
        void setManager(int size) {
            tSize = size;
        }

        // Displays complete manager profile including employee and person 
        void display() const {
            Employee::display();  // Call employee display method 
            cout << "Team size: " << tSize << endl;
        }
};

int main() {
    Manager mgr;
    mgr.setPerson("Aash", 25);        
    mgr.setEmployee("EMP2007", "Sales");  
    mgr.setManager(10);               
    mgr.display();

    return 0;
}