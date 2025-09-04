#include <iostream>
using namespace std;

class BankAccount{
    private:
        int balance;
    public:
        void setbalance ( int bal){

            balance = bal;
        }
        int getbalance (){
            return balance;

        }

};
int main (){
    BankAccount BK;
    float a;
    cout << "Enter a balance:" << endl;
    cin >> a;
    if (a < 0)
    {
        cout << "Negative value cannot be assigned" << endl;
    }
    else{
        BK.setbalance(a);
        cout << "Balance:" << BK.getbalance() << endl;
    }
    return 0;
    
    
}
