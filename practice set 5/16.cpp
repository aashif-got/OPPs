#include<iostream>
using namespace std;
class Bank_account{
    string name;
    int ID;
    static float int_rate;
    public:
        Bank_account(string n, int id){
            this->name = n;
            this->ID = id;

        }
        void get_details(){
            cout << "Account Holder Name: " << name << "\n" << "ID:" << ID << endl;
            cout << "The intrest rate is:" << int_rate << "%" <<endl;
        }


};
float Bank_account :: int_rate = 5;

int main()
{
    Bank_account b1("Aash",12011);
    b1.get_details();
    Bank_account b2("Swap",12012);
    b2.get_details();
    return 0;
}