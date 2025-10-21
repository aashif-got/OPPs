#include<iostream>
using namespace std;
class bank_account {
    int Account_number;
    float Balance;
    static float intrest_rate;
    public:
        bank_account(int a, int b){
            this->Account_number = a;
            this->Balance = b;

        }
        void deposite(int deposite){
            Balance = deposite + Balance;
            cout << "Deposited:" << deposite << "New Balance:" << Balance << endl;

            
            
        }
        int withdraw(int withdraw){
            if (withdraw > Balance)
            {
                cout <<"Insufficient Balance!" << endl;
            }
            else{
                Balance = Balance - withdraw;
                cout << "Withdraw:" << withdraw << "New balance:" << Balance <<endl;
            }
            
            
            return Balance;
            

        }
        void get_details(){
            cout << "Account number: " << Account_number <<endl;
            cout << "Balance: " << Balance << endl;
            cout << "Interest rate: " << intrest_rate<<"%"<< endl;
        }
        friend void applyintrest(bank_account &b);
};
float bank_account :: intrest_rate = 5.0;
void applyintrest(bank_account &b){

    float interest  = (b.Balance * bank_account::intrest_rate) / 100;
    b.Balance += interest;
    cout<< "Interest Applied:" << interest<<endl;
    cout << "New Balance:" << b.Balance << endl;


}

int main()
{
    bank_account b1(00001, 2000);
    b1.get_details();

    b1.deposite(20);
    b1.withdraw(500);
    applyintrest(b1);
    return 0;
}