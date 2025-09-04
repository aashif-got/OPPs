#include <iostream>
using namespace std;
int main ()
{
    int n, reversed  = 0;
    cout << "Enter a number :";
    cin >> n;
    int original = n;
    while (n != 0)
    {
        int digit = n % 10 ;
        reversed = reversed * 10 + digit;
        n = n / 10;

    }
    cout << "Original Num :" << original << endl;
    cout << "Reversed Num :" << reversed << endl;
    return 0 ;
    
}