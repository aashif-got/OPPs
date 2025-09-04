#include <iostream>
using namespace std;
int main ()
{
    int marks;

    int sum = 0;
    int count = 0;

    
    while (marks != 0)
    {
        
        cout << "Enter the Number:" << endl;
        cin >> marks;
          
        
        
        int temp = marks;
        
        if(marks < 0){
            break;
            
        }
        sum = sum + temp; 
        count++;     
    }
    int average = sum/count;

    cout << sum << endl;
    cout << "average:" << average << endl; 
    
}