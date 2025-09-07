#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int breadth;
    public:
    rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    void area(){
        cout << length * breadth << endl;
    }
};
int main(){

    rectangle r(5,5);

    r.area();

    return 0;
}
