#include <iostream>
using namespace std;
int main (){
    int a , b;
    cout << "Enter a numbers :";
    cin >> a;
    cout << "Enter the power of the number:";
    cin >> b;
    int result = 1;
    for (int i = 1; i <= b; i++){
        result = result * a;
    }
    cout << result;
    return 0;
    

    
}