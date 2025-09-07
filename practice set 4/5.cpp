#include <iostream>
using namespace std;
class time{
    int hours;
    int minute;
    float seconds;
    public:
        time(){
            hours = 0;
            minute = 0;
            seconds = 0;
        }
        time(int h, int m){
            hours = h;
            minute = m;
        }
        time(int h, int m, float s){
            hours = h;
            minute = m;
            seconds = s;
        }
        void display (){
            cout << "Hours: " << hours <<endl;
            cout << "Minutes: " << minute << endl;
            cout << "Seconds: " << seconds << endl;

        }

};
int main (){
    time t1, t2(2, 30), t3(2,30,30);
    t1.display();
    t2.display();
    t3.display();

}