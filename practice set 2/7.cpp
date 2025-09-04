#include <iostream>
using namespace std;
int main (){
    int a;
    bool isPrime = true;
    cout << "Enter a number:";
    cin >> a;
    for(int i = 2; i <= a/2 ; i ++)
    {
        if(a % 2 == 0)
        {
            isPrime = false;
            break;

        } 
    }
   if(isPrime == false){
    cout << a << " is not a prime number."<< endl;
   }
   else{
    cout << a << " is a prime number."<< endl;
   }
    return 0;
    
}