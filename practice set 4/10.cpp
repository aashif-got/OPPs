#include <iostream>
using namespace std;
class fraction{
    float numerator;
    float denominater;
    public:
        fraction(){
            numerator = 0;
            denominater = 1;
        }
        fraction(float n){
            numerator = n;
            denominater = 1;
        }
        fraction(float n , float d){
            numerator = n;
            denominater = d;
        }
        void display (){
            cout << numerator << "/" << denominater << endl;
        }

};
int main (){
    fraction f1, f2(5), f3(3,6);
    f1.display();
    f2.display();
    f3.display();
    return 0;
}