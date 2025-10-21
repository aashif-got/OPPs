#include<iostream>
using namespace std;
class cars{
    string car_name;
    static int count ;
    public:
        cars(string n){
            this->car_name = n;
            count++;

        }
        void get_details(){
            cout << "The car name is: " << car_name << endl;
        }
        static void get_count(){
            cout << "Number of cars = " << count << endl;
        }
};
int cars :: count = 100;

int main()
{
    cars c1("BMW");
    c1.get_details();
    c1.get_count();
    cars c2("PORCHE");
    c2.get_details();
    c2.get_count();
    cars c3("MERCEDES");
    c3.get_details();
    c3.get_count();


    return 0;
}