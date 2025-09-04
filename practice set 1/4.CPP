#include <iostream>
using namespace std;
int main ()
{
    int a, b, c;
    int largenum = 0;
    cout << "enter three number:";
    cin >> a >> b >> c ;
    if (a > b)
    {
        largenum = a;
        cout << "The largest number is :" << largenum;  
    }
    else if (b > c)
    {
        largenum = b;
        cout << "The Largest number is:" << largenum;
    }
    else{
        largenum = c;
        cout << "The Largest number is:" << largenum;
    }
    return 0 ;
    

    
    
}