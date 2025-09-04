#include <iostream>
using namespace std;
int main (){
    int a , fact = 1, i = 1;
    cout << "Enter a number:" << endl;
    cin >> a;
    while (i <= a)
    {
        fact = i * fact;
        i++;

    }
    cout << "The factorial is :" << fact << endl;
    return 0;
    
}
