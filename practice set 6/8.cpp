#include<iostream>
using namespace std;
class circle{
    private:
    
        float radius;
        static float p;
    public:
        circle(float r){
            this->radius = r;

        }
        float area(){
            return p*radius*radius;
            
            
        }
        static void setpi(float pi){
            p = pi;

        }
        void details(){
            cout << "Radius:" << radius <<endl;
            cout << "pi value:" << p <<endl;
            cout << "Area of the circle is:" << area() << endl;
        }



};
float circle :: p = 3.14;

int main()
{
    circle c1(5);
    
    circle::setpi(3.141);
    c1.details();
    

    return 0;
}