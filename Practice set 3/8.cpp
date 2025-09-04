#include <iostream>
using namespace std;
class Account{
    private:
        string Accountnumber ;
        int Balance;
    public:
        void setAccountnum (string num){
            Accountnumber = num;
        }
        void setBalance (int bal){
            Balance = bal;
        }
        string getAccountnum (){
            return Accountnumber;
        }
        int getBalance (){
            return Balance;
        }
    };
int main (){
    string accountnum;
    int balance;
    cout << "Enter the Account number:"; << endl;
    cin << accountnum;
    cout << "Enter the account Balance:"; << endl;
    
}