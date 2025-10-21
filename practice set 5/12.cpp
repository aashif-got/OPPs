#include<iostream>
using namespace std;
class student{
    int *marks;
    string name;   
    public:
        student(int m,  string n){
            this->name = n;
            marks = new int;
            *marks = m;
            cout << "Constructor : Memory allocated for:" << name << endl;
        }
        void details(){
            cout << "NAME:" << name << "Mark:" << *marks << endl;
        }
        ~student(){
            delete marks;
            cout << "Destructor : Memory freed for:" << name <<endl;
        }

};
int main (){
    student s1(89,"aash");
     s1.details();
    student s2(98, "aashif");
   
    s2.details();
    return 0;
}