#include <iostream>
using namespace std;
class complex{
    float real;
    float img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(float r){
        real = r;
    }
    complex(float r, float i)
    {
        real = r;
        img = i;
    }
    void display(){
        cout << "(" << real << ",i" << img << ")" << endl;
    }
};
int main (){
    complex c1, c2(5),c3(5,6);
    c1.display();
    c2.display();
    c3.display();
    return 0;

}