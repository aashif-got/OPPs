#include<iostream>
using namespace std;
int main ()
{
    int n ;
    cout << "Enter a number: ";
    cin >> n;
    int t1 = 0 , t2 = 1, nextTerm = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
        {
           cout << t1 << " ";
           continue;
        }
        if ( i == 1)
        {
            cout << t2 << " ";
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
        

        
        

        
    }
    
}