#include <iostream>
using namespace std;

class BankAccount {
    private:
        string account_Holder;   
        int account_Number;
        double Balance;

    public:
        // Constructor to initialize account details
        BankAccount(string n, int acc_No, double b) {
            account_Holder = n;
            account_Number = acc_No;
            Balance = b;
        }

        // Method to deposit money into the account
        void deposit(double amount) {
            if (amount > 0) {
                Balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid input\n"; 
            }
        }

       
        void withdraw(double amount) {
            if (amount > 0 && amount <= Balance) {
                Balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            } else {
                cout << "insufficient amount\n";  
            }
        }

        // Method to display account details
        void display() {
            cout << "Account Holder: " << account_Holder << endl;
            cout << "Account Number: " << account_Number << endl;
            cout << "Current Balance: " << Balance << endl;
        }
};

int main() {
    BankAccount acc("aashif", 2007123, 29000.0);
    acc.display();
    acc.deposit(5000);
    acc.withdraw(30);
    acc.withdraw(1500);
    acc.display();

    return 0;
}