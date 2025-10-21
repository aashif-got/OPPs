#include <iostream>
using namespace std;
class Base
{
protected:
    int x;

public:
    Base(int a) { x = a; }
    void show() { cout << "Base: " << x << endl; }
};
class Derived : public Base
{
    int y;

public:
    Derived(int a, int b) : Base(a) { y = b; }
    void show() { cout << "Derived: " << x << " " << y << endl; }
};
int main()
{
    Derived d(5, 10);
    d.show();
    return 0;
}