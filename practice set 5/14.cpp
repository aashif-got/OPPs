#include<iostream>
using namespace std;
class employee{
    private:
        int id;
        static int count;
    public:
        employee(int i){
            this->id = i;
            count++;

        }
        void get_details(){
            cout << "ID:" << id << endl;
            cout << "Employee " << count << " created" <<endl;


        }



};
// count is a static data member of class employee
int employee :: count;

int main()
{
    employee ee1(123);
    ee1.get_details();
    employee ee2(124);
    ee2.get_details();
    employee ee3(125);
    ee3.get_details();
    

    return 0;
}