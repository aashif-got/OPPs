#include <iostream>
using namespace std;
int main (){
    int sum = 0, evennum ;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i; 
        }

       
        
    }
    cout << "Sum of all even numbers from 1 to 100 : " << sum << endl;
    
}