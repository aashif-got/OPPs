#include<iostream>
using namespace std;
class rectangle{
    private:
        float length;
        float breath;
        int area;
        
    public:
        rectangle(float l , float b, int a = 0){
            this->breath = b;
            this->length = l;
            this->area = a;

        }
        void  area_a(){

            area = length * breath;

        }
        void get_details(){
            cout << "Length: " << length << endl;
            cout << "Breath: " << breath << endl;
            cout << "Area: " << area << endl;
        }
        
        friend void compare_area(rectangle &a, rectangle &b);
};
void compare_area(rectangle &a, rectangle &b){

    if (a.area > b.area )
    {

        cout << a.area<< " has the biggest area" << endl;

    }
    else if (a.area < b.area)
    {
        cout << b.area<< " has the biggest area" << endl;
    }
    else if (a.area == b.area)  
    {
        cout << "Both are equal" << endl;
    }
}
int main()
{
    rectangle r1(4,5);
    rectangle r2(2,4);
    r1.area_a();
    r1.area_a();

    r1.get_details();

    r2.area_a();
    r2.get_details();

    compare_area(r1, r2);

    return 0;
}