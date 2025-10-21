#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
        employee(int i){
            this->id = i;
            count++;


        }
        void get_details(){
            cout<<"ID:" << id << endl;
            cout << "Function called " << count << " times" <<endl;
        }
};
int employee :: count;
int main()
{
    employee e1(123);
    e1.get_details();// called one time
    employee e2(124);

    e2.get_details();// called two times
    employee e3(125);
    e3.get_details();// called three times
    return 0;
}