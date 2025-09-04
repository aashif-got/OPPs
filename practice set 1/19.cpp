#include <iostream>
using namespace std;
int main ()
{
    int P ;
    cout << "Enter the loan amount :";
    cin >> P ;
    int R ;
    cout << "Enter the rate of interest :"; 
    cin >> R ;
    int T; 
    cout << "Enter the time period :";
    cin >> T ;  
    int SI = (P * R * T) / 100;
    cout << "Intrest:" << SI << "\n";
    int A = P + SI;
    cout << "Total Amount:" << A;
    return 0;

}