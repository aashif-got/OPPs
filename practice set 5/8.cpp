#include <iostream>
using namespace std;
class student {
    int rollno;
    string name;
    public:
        student(){
            this->name = "unknown";
            this->rollno = 0;


        }
        student(int r){
            this->rollno = r;
            this->name = "unknown";

        }
        student(string n , int r){
            this->name = n;
            this->rollno = r;

        }
        void get_details(){
            cout << "NAME: " << name << "ROLL NO:" << rollno << endl;
        }

};
int main (){
    student s1;
    student s2("aash", 01);
    student s3(01);
    s1.get_details();
    s2.get_details();
    s3.get_details();
}
