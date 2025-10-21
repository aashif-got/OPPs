#include <iostream>
using namespace std;
class student{
    private:
        string name;
        int roll_no;
    public:
        student(string n, int r){
            this->name= n;
            this->roll_no = r;

        }
        void get_details(){
            cout<< "Name: " << name << "\nRoll No:" << roll_no <<endl;
        }

};
int main (){
    student s1("AASHIF" , 92);
    s1.get_details();
}