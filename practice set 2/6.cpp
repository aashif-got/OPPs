#include <iostream>
using namespace std;
int main (){
    int a , reversed = 0, i = 0 ;
    int lenght = sizeof(a) / 4;
    cout << "enter a number:";
    cin >> a;
    int original = a ;
    cout << "original num :" << original << endl;
    while (a != 0)
    {
        int digit = a % 10;
        reversed = reversed * 10 + digit;
        a = a / 10;
        i++;


    }
    cout << "Reversed num :" << reversed << endl;
    return 0;
    

}