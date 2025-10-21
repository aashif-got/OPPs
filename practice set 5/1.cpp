#include <iostream>
using namespace std;
class teacher;
class student
{
    int age;
    int roll;
    string name;
    string school;

public:
    student(int a, int r, string n, string s)
    {
        this->age = a;
        this->roll = r;
        this->name = n;
        this->school = s;
    }
    friend void details(student, teacher);
};
class teacher
{
    string faculty;
    string subject;

public:
    teacher(string f, string sub)
    {
        this->faculty = f;
        this->subject = sub;
    }
    friend void details(student, teacher);
};
void details(student s, teacher t) {
    cout << "--- Student Details ---\n";
    cout << "Name: " << s.name << "\nRoll: " << s.roll << "\nAge: " << s.age << "\nSchool: " << s.school << endl;

    cout << "\n--- Teacher Details ---\n";
    cout << "Faculty: " << t.faculty << "\nSubject: " << t.subject << endl;
}

int main()

{
    student s1(18, 101, "Alice", "SCDS");
    teacher t1("UJJWAL", "OPPS");
    details(s1, t1);
    return 0;
}
