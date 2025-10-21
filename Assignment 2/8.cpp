#include <iostream>
using namespace std;

// Base class
class Calculator {
    public:
        // Overload
        int add(int a, int b) {
            return a + b;
        }

        float add(float a, float b) {
            return a + b;
        }

        
        virtual void showType() {
            cout << "Base Calculator\n";
        }
};

// Derived class
class Scientific_Calculator : public Calculator {
    public:
        // Overrides 
        void showType() override {
            cout << "Scientific Calculator\n";
        }
};

int main() {
    Calculator basic;              
    Scientific_Calculator sci;

    //Demonstrate Overloading
    cout << "Int Add: " << basic.add(5, 3) << endl;         
    cout << "Float Add: " << basic.add(2.5f, 3.5f) << endl; 

    
    Calculator* ptr; // Base class pointer
    ptr = &sci;      // Base class pointer to derived class object
    ptr->showType();   

    return 0;
}