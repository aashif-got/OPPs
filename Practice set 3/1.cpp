#include <iostream>
using namespace std ;
class student{
    private:
        string name = "John";
        int age = 10;
    public:
        string getnameage (){
            return name;    
        }
        int getage (){
            return age;
        }
        string setname (string n){
            name = n;
        }
        int setage (int a){
            age = a;
        }



};
int main (){
    student stu;
    //stu.name
    cout << "enter name: ";
    string n;
    cin >> n;
    stu.setname(n);
    cout << "enter age: ";
    int a;  
    cin >> a;
    stu.setage(a);
    cout << "name: " << stu.getnameage() << endl;
    cout << "age: " << stu.getage() << endl;
    return 0;
}

