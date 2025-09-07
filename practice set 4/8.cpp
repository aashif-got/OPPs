#include <iostream>
using namespace std ;
class car{
    string brand;
    string model;
    int price;
    public:
        car(string b){
            brand = b;
            model = "unknown";
            price = 0;

        }
        car(string b , string m){
            brand = b;
            model = m;
            price = 0;
        }
        car(string b , string m, int p){
            brand = b;
            model = m;
            price = p;
        }
        void display (){
            cout << "Brand: " << brand << "\tModel: " << model << "\tPrice: " << price << endl;
        }
};
int main (){
    car c1("BMW"),c2("AUDI" ,"R8"), c3("FERRARI", "IDK", 2000000);
    c1.display();
    c2.display();
    c3.display();

}

