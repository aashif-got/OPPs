#include <iostream>
using namespace std;
int main (){
    int a;
    cout << "enter a number:";
    cin >> a;
    if (a < 0)
    {
        cout << "it a negative number";
    }
    else if (a == 0)
    {
        cout << "it is a zero";
    }
    else{
        cout << "it is positive number";
    }
    return 0 ;
    

    
    
}