#include <iostream>
using namespace std;
class circle{
    private:
        int radius;
        float area;
    public:
        void setradius (int r){
            radius = r;
        }
        int getradius (){
            return radius;
        }
        float getarea(){

            area = 3.14 * (radius*radius);
            return area;
        }

};
int main (){
    circle cir;
    float circle;
    cout << "Enter the radius of the circle:" << endl;
    cin >> circle;
    cir.setradius(circle);
    cout << "Radius of the circle is: " << cir.getradius() << endl;
    cout << "Area of the circle is:" << cir.getarea() << endl;
    return 0;

}