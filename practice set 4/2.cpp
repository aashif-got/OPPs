#include <iostream>
using namespace std;
class student{
    string name;
    int age;
    int mark;
    public:
    student(){
        name = "unknown";
        age = 0;
        mark = 0;

    }
    student(int a, int m , string n){
        name = n;
        age = a;
        mark = m;

    }
    
   
    void display(){
        cout << name << endl;
        cout << age << endl;
        cout << mark << endl;
    }


};
int main (){
    student s1;
    s1.display();
    student s2(17, 55, "aash");
    s2.display();
}