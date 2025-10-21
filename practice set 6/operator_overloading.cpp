#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float img;

public:
    complex(float r, float i)
    {
        this->img = i;
        this->real = r;
    }
    void display()
    {
        cout << real << "+" << img << "i" << endl;
    }

    
    complex operator+(complex c)
    {
        return complex(real + c.real, img + c.img);
    }
};
int main()
{
    complex c1(2, 3);
    c1.display();
    complex c2(4, 5);
    c2.display();
    complex c3 = c1 + c2; // c1.operator+(c2)

    cout << "After adding the complex number: " << endl;
    c3.display();

    return 0;
}