#include <iostream>
using namespace std;
int main (){
    int num;
    cout << "enter a number:" << endl;
    cin >> num;
    int temp = num;
    int max = 0;

    do
    {
        int digit = temp % 10;
        if (digit > max)
        {
            max = digit;
        }
        temp = temp / 10;
        

       
    } while (temp != 0);
    cout << "the largest digit is :" << max << endl;
    return 0;
    
}