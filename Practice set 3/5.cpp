#include <iostream>
using namespace std;
class employee {
    private:
        int id;
        int salary;
    public:
        void setid (int i){
            id = i;
        }
        int getid (){
            return id;
        }       
        void setsalary (int s){
            salary = s;
        }
        int getsalary (){
            return salary;

        }
        int display (){
            cout << "ID: " << getid() << endl;
            cout << "Salary: " << getsalary() << endl;
        }
};
int main (){
    employee emp;
    int id, salary;
    int n;
    cout << "Enter number of employees: " << endl;
    cin >> n;
    
    for (int  i = 0; i < n; i++)
    {
        cout << "enter details for employee "<< i + 1 << endl;
        cout << "Enter ID: " << endl;
        cin >> id;  
        cout << "Enter salary: " << endl;
        cin >> salary;
        emp.setid(id);
        emp.setsalary(salary);
        emp.display();
        cout << "------------------" << endl;

    }
    for (int i = 0; i < n; i++)
    {
       cout << "Details of employee " << i + 1 << endl;
       emp.display();
        
       cout << "------------------" << endl;

    }
    
   
    
    
    return 0;
    

}