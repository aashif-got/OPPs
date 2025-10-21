#include <iostream>
using namespace std;

class Sports; // Forward declaration

class Student {
    private:
        int mark;  

    public:
        // Constructor to initialize marks
        Student(int m) {
            mark = m;
        }

        // Declare friend function to access private data
        friend void Display_Info(Student stu, Sports sport);
};

class Sports {
    private:
        int score;  

    public:
        // Constructor to initialize score
        Sports(int s) {
            score = s;
        }

        // Declare friend function to access private data
        friend void Display_Info(Student stu, Sports sport);
};

// Friend function accessed private members of both Student and Sports
void Display_Info(Student stu, Sports sport) {
    cout << "Academic mark: " << stu.mark << endl;
    cout << "Sports score: " << sport.score << endl;
    cout << "Total performance: " << stu.mark + sport.score << endl;
}

int main() {
    Student s1(85);
    Sports a1(40);
    Display_Info(s1, a1);

    return 0;
}