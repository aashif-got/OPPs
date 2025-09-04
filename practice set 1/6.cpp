#include <iostream>
using namespace std;
int main ()
{
    int a;
    int temp = 0;
    cout << "Enter a number for its multiplication table";
    cin >> a ;
    for ( int i = 1; i < 11; i++)
    {
        temp = i * a;
        cout  << "\n"<< temp;

        
    }
    return 0 ;
    


}