#include<iostream>
using namespace std;
class student{
    private:
        int marks;
    public:
        student(int m){
            this->marks =m;

        }
        friend int display(student s1, student s2);
};

int display(student s1, student s2){
    if (s1.marks > s2.marks)
    {
        cout<< "First student has higher marks:" << s1.marks << endl;
    }
    else if (s1.marks < s2.marks){
        cout << "Second student has higher marks:" << s2.marks << endl;
    }
    else{
        cout << "Both of them has the same mark of "<< s1.marks<<endl;
    }


    


}
int main (){
    student s1(95);
    student s2(95);
    display(s1,s2);


}