#include <iostream>
using namespace std;
int main (){
    int a, b;
    cout << "Enter two number ";
    cin >> a >> b;
    if(a > b){
        int c = a;
        cout << "Greater number is: " << c;
    }
    else{
        int c = b;
        cout << "Greater number is: " << c;
    }
    return 0;
}
