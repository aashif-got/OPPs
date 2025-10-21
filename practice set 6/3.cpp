#include<iostream>
using namespace std;
class employee{
    private:
        int id;
        int salary;
        static int employee_count;
    public:
        employee(int i, int s){
            this->id = i;
            this->salary = s;
            employee_count++;

        }
        void employee_details(){
            cout << "Employee ID: " << id << endl;
            cout << "Salary: " << salary <<endl;
            cout << "NO of employee:" << employee_count <<endl;
        }
        
        
};
int employee :: employee_count;
int main()
{
    employee e1(01,700000 );
    e1.employee_details();
    employee e2(02, 60000);
    e2.employee_details();
    employee e3(03, 800000);
    e3.employee_details();

    return 0;
}