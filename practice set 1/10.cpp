#include <iostream>
using namespace std;
int main ()
{
    int year ;
    cout << "Enter a year to check if it is leap year or not:"<< endl;
    cin >> year;
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << "is a leap year";

    }
    else{
        cout << year << " is not a leap year";
    }
    return 0;
    
}