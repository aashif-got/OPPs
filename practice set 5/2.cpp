
#include <iostream>
using namespace std;
class add2;
class add1
{
private:
    int numA;

public:
    add1(int A)
    {
        this->numA = A;
    }
    friend int details(add1, add2);
};
class add2
{
private:
    int numB;

public:
    add2(int B)
    {
        this->numB = B;
    }
    friend int details(add1, add2);
};
int details(add1 a, add2 b)
{
    return a.numA + b.numB;
}
int main()
{
    add1 a(15);
    add2 b(5);
    cout << "sum is:" << details(a, b) << endl;
}
