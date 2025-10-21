#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    public:
        student(){
            roll_no = 0;
            name = "unknown";
        }
        void details(){
            cout << "roll no: " << roll_no << "\tname: " << name <<endl;
        }


};
int main (){
    student s1;
    s1.details();
    return 0;
}