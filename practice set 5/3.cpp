#include <iostream>
using namespace std;
class rectangle{
    float lenght;
    float width;
    public:
        rectangle(float l, float w){
            this->lenght= l;
            this->width = w;
        }
        friend int details (rectangle);


};
int details(rectangle r)
{
    return r.lenght * r.width;
}
int main (){
    rectangle r(2,3);
    cout<<"rectangle: " << details(r)<< endl;
}
