#include<iostream>
using namespace std;
class cmp{
    float real;
    float ima;
    public:
        cmp(){
            real = 0;
            ima = 0;
        }
        cmp(float r, float i){
            this->ima = i;
            this->real = r;
        }
        cmp(float r){
            this->real = r;
            this->ima = 0;

        }
        cmp(const cmp &c){
            real = c.real;
            ima = c.ima;

        }
        void details(){
            cout << real << "+" << ima << "i" << endl;
        }
        

};
int main (){
    cmp c1;
    cmp c2(3.5, 4.5);
    cmp c3(3.5);
    cmp c4 = c2;
    c1.details();
    c2.details();
    c3.details();
    c4.details();

}