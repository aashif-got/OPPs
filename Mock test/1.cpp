#include <iostream>
using namespace std;
class my_string
{
private:
    int n;
    char c;

    string arr;

public:
    my_string(string a)
    {
        arr = a;
    }
    void to_lower()
    {
        cout << "lower case: ";
    
        for (int i = 0; i < arr.size(); i++)
        {
            // int temp;
            // int lower = (int)arr[i] + 32;
            // temp = char(lower);
            // cout << temp;
            char ch = arr[i];
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;

            }
            cout << ch ;
            
            
        }
        cout << endl;
    }

    void capital()
    {
        cout << "Uppercase: ";
        for (int i = 0; i < arr.size(); i++)
        {
            char ch = arr[i];
            if (ch >= 'a' && ch <= 'z')  // only convert if lowercase
                ch = ch - 32;
            cout << ch;
        }
        cout << endl;
    }
    void search(char a){
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == a)
            {
                cout << a << " it does exists";
                
            }
           
            
        }
        
    }
    void find_index(char a){
        for (int i = 0; i < arr.size(); i++)
        {
             if (arr[i] == a)
            {
                cout <<"The index location of " << a << " is " << i ;
                
            }
            
            
        }
        cout << endl;
        

    }
    void 
};
int main()
{

    my_string m1("aAsHIf");
    m1.capital();
    m1.to_lower();
    m1.find_index('f');
    
    m1.search('a');
   
}