#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "Enter a number :";
    cin >> n ;
    int reversedNumber = 0 ;
    int original = n;

    while (n != 0)
    {

        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit ;
        n = n / 10 ;
        

    
            
    }
    if (reversedNumber == original)
        {
           cout << "Palindrome number\n" ;
        }
        else 
        {
            cout << "Not a Palindrome number\n" ;
        }
    return 0 ;
    
}