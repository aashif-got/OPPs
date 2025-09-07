#include <iostream>
using namespace std;
class bankaccount{
    string account_number;
    float balance;
    public:
        bankaccount(){
            account_number = "None";
            balance = 0;
        }
        bankaccount(string a){
            account_number = a;
            balance = 0;

        }
        bankaccount(string a, int b){
            account_number = a;
            balance = b;
        }
        void display(){
            cout << "Account number: " << account_number << "\nBalance: " << balance << endl;
        }

};
int main (){
    bankaccount b1, b2("s123"), b3("s124", 500);
    b1.display();
    b2.display();
    b3.display();
}