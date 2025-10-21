#include <iostream>
using namespace std;
class swap2;
class swap1
{
private:
    int val1;

public:
    swap1(int n1)
    {
        this->val1 = n1;
    }
    void display (){
        cout << val1 << endl;
    }
    friend void swapping(swap1 &s1, swap2 &s2 );
};
class swap2
{
private:
    int val2;

public:
    swap2(int n2)
    {
        this->val2 = n2;
    }
    void display1 (){
        cout<< val2 << endl;

    }
    friend void swapping(swap1 &s1, swap2 &s2);
};
void swapping (swap1 &s1, swap2 &s2)
{
    int temp = s1.val1;
    s1.val1 = s2.val2;
    s2.val2 = temp;
}
int main()
{
    swap1 n1(5);
    swap2 n2(10);

    cout << "Before Swapping: num1 = ";
    n1.display();
    cout << "  num2 = ";
    n2.display1();
    cout << endl;

    swapping(n1,n2);
    cout << "After Swapping:  num1 = ";
    n1.display();
    cout << "  num2 = ";
    n2.display1();
    cout << endl;
}