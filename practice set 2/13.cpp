#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num ;
    cout << "Enter a number :" << endl;
    cin >> num;
    int length = 0;
    int temp = num;
    int sum = 0;
   
    while (temp != 0)
    {
        temp = temp / 10;
        length++;
    }
    while (num != 0)
    {
        int digit = temp % 10;
        sum = sum + pow(digit, length);
        temp = temp / 10;

    
    }
    if (sum == num)
    {
       cout << num << "is an armstrong number" << endl;
    }
    else{
        cout << num << "is not an armstrong number" << endl;
    }
    return 0;
   
    
    

}