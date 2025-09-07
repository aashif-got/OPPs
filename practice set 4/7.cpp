#include <iostream>
using namespace std;
class distance_d{
    int feet;
    int inches;
    public:

        distance_d(){
            feet = 0;
            inches = 0;
        }

        distance_d(int f){
            feet = f;
            inches = 0;
        }
        distance_d(int f, int i){
            feet = f;
            inches = i;
        }

        void display(){
            cout << "Feet:" << feet << "\nInches: " << inches << endl; 
        }


};

int main()
{
    distance_d d1, d2(5), d3(4, 6);

    d1.display();
    d2.display();
    d3.display();       
    return 0;
}