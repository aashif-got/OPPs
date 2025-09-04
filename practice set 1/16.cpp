#include <iostream>
using namespace std;
int main ()
{
    int n, sum  = 0;
    cout << "Enter a sequence of number :";
    cin >> n;
    int original = n;
    while (n != 0)
    {
        int digit = n % 10 ;
        sum = sum + digit;
        n = n / 10; 
       

    }
    cout << "Sum of digit of " << original << " is " << sum;
    
    return 0 ;
    
}