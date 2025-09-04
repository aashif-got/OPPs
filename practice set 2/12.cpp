#include <iostream>
using namespace std;
int main ()
{
    int num ;
    cout << "Enter a number :";
    cin >> num;
    for ( int i = 0; i < num; i++)
    {
        if (num % 3 == 0 && num  % 5 == 0)
        {
            cout << "FIZZBUZZ" << endl;
            break;
        }
        else if (num % 3 == 0)
        {
            cout << "FIZZ" << endl;
            break;
        }
        else if (num % 5 == 0)
        {
            cout << "BUZZ" << endl;
            break;
        }
    }
    return 0 ;
    
}