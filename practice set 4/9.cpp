#include <iostream>
using namespace std;
class employee{
    string name ;
    string id;
    int salary;
    public:
        employee(string n , string i){
            name = n;
            id = i;
            salary = 0;

        }
        employee(string n , string i , int s){
            name = n;
            id = i;
            salary = s;
        }
        void display (){
            cout << "Name:" << name << "\t ID:" << id << "\tsalary: " <<  salary << endl;
        }
};
int main (){
    employee e1("aash", "m1012"), e2("aashif", "m1015", 200000);
    e1.display();
    e2.display();
    return 0;



}