#include <iostream>
using namespace std;
int main ()
{
    int a;
    cout << "enter a number:";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " is not a prime number";
    }
    else
    {
        cout << a << " is a prime number";
    }
}