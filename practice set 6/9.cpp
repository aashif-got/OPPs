/*  . Vehicle Class with Inheritance and Constructor Overloading Create a
Vehicle base class and a Car derived class with:
• Protected: brand
• Public: Constructor overloading in Car for different car types
  */

#include<iostream>
using namespace std;
class vehical{
    private:
        string brand;
    public:
        vehical(string b){
            this->brand = b;

        }   
        void get_brand(){
            cout << "Brand:" << brand << endl;
        }

};
class cars : public vehical{
    private:
        string model;
        float price;
    public:
        cars(string b, string m, float p) : vehical(b){
            this->model = m;
            this->price = p;

        }
        cars(string b, string m) : vehical(b){
            this->model = m;
            this->price = 0;

        }
        void get_details(){
            get_brand();
            cout << "Model: " << model << endl;
            cout << "Price: " << price << endl;

        }
    };

int main()
{
    cars c1("BMW", "X5", 80000);
    c1.get_details();
    cars c2("PORCHE", "CAYENNE");
    c2.get_details();
    
    return 0;

}