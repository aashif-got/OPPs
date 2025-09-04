#include <iostream>
using namespace std;
int main (){
    int num ;
    cout << "enter a number:" << endl;
    cin >> num;
    int length = 0;
    int temp = num;
    int reversed = 0;
    while (temp != 0)
    {
        temp = temp / 10;
        length++;
    }
    cout << "the length of the number is :" << length << endl;
    temp = num;
    
    for (int i = 1; i <= length; i++)
    {
        
        int digit = temp % 10;

        reversed = reversed * 10 + digit;

        temp = temp / 10;
    }
    if (reversed == num)
    {
        cout << num << " is a palindrome number" << endl;
    }
    else{
        cout << num << " is not a palindrome number" << endl;
    }

    
    

}