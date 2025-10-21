#include<iostream>
using namespace std;
class complex{
    private:
        float real;
        float img;
    public:
        complex(float r, float i){
            this->img = i;
            this->real = r;

        }
        void display(){
            cout << "Complex number:" << endl;
            cout << real << "+" << img << "i" << endl;

        }
        friend void add_complex(complex &a, complex&b);
};
void add_complex(complex &a, complex &b){
    float r = a.real + b.real;
    float i = a.img + b.img;
    cout << "After adding the complex number: " << r << "+" << i << "i" << endl;
}
int main()
{
    complex c1(2,3);
    c1.display();
    complex c2(4,5);
    c2.display();
    add_complex(c1,c2);

    
    return 0;
}