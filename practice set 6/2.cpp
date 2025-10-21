#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int roll_no;
        int mark;
    public:
        student(){
            this->mark = 0;
            this->name = "NaN";
            this->roll_no = 0;

        }
        student(string n, int r){
            this->name = n;
            this->roll_no = r;
            this->mark = 0;
        }
        student(string n, int r, int m){
            this->name = n;
            this->roll_no = r;
            this->mark = m;


        }
        void student_details(){
            cout << "NAME: " << name <<endl;
            cout << "ROLL N0: " << roll_no << endl;
            cout << "MARK:" << mark << endl;
        }
};
int main()
{
    student s1, s2("Aashif", 01), s3("Aash", 02, 95);
    s1.student_details();
    s2.student_details();
    s3.student_details();

    return 0;
}