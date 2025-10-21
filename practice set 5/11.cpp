#include<iostream>
using namespace std;
class car{
    string name;
    string model;
    public:
        car(string n, string m){
            name = n;
            model = m;

        }
        void get_details(){
            cout << "Car Name: " << name << "\n" << "Model: " << model << endl;
        }
        ~car(){
            
        }
};
int main (){
    car c1("BMW", "X5");
    c1.get_details();
}