#include<iostream>
using namespace std;
class cars{
    private:
        string name;
        float price;
    public:
        cars(string n, float p){
            this->name = n;
            this->price = p;

        }
        void get_details(){
            cout<< "Name:" << name <<endl;
            cout << "Price:" << price << endl;

        }
        ~cars(){
            cout << "object is destroyed" << endl;
        }



    

};
int main()
{
    cars c1("BMW", 200000);
    c1.get_details();
    cars c2("PORCHE", 300000);
    c2.get_details();

    return 0;
}