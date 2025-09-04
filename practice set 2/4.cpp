#include <iostream>
using namespace std;
int main (){
    int a , count = 0;
    cout << "enter a number :";
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        count = count + i;   
    }
    cout << "The sum is :" << count << endl;
    return 0;
    
}