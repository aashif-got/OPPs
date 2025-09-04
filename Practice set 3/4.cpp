#include <iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int width;
        //int area;
        //area = (length * width);
    public:
        void setlength (int l){
            length = l;
        }
        void setwidth (int w){
            width = w;
        }
        //void setarea (int a)
        int getlength (){
            return length;
        }
        int getwidth (){
            return width;
        }
        
};
int main (){
    rectangle rec;
    int length, width, area;
    cout << "enter the length of the rectangle: "<< endl;
    cin >> length;
    cout << "enter the width of the rectangle: " << endl;
    cin >> width;
    rec.setlength(length);
    rec.setwidth(width);

    area = rec.getlength() * rec.getwidth();
    cout << "Area of the rectangle is: " << area << endl;
    return 0;
}