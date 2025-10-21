

#include <iostream>
using namespace std;

class List{
    private:
        int* a;      
        int n;      // current number of elements stored
        int capacity;  // maximum capacity of the list
    public:
        // Constructor
        List(int capacity){
            this->n = 0;
            this->capacity = capacity;
            a = new int[this->capacity];
        }
        ~List(){ // destructor
            delete[] a;
        }

        void add(int value){
            if(n < capacity){         // Add a value at the end 
                a[n++] = value;
            } else {
                cout << "List is full!" << endl;
            }
        }

        void remove(int value){
            if (n == 0) {
                cout << "List is empty!" << endl;
                return;
            }
            int idx = -1; 
            for (int i = 0; i < n; ++i) { 
                if (a[i] == value) { 
                    idx = i;
                    break;
                }
            }
            if (idx == -1) {
                cout << "Value not found!" << endl;
                return;
            }
            for (int j = idx; j < n - 1; ++j) 
                a[j] = a[j + 1];
            --n;
        }

        // Prints all the elements 
        void display(){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }

        // Returns the  current number 
        int getSize(){
            return n;
        }
};

int main(){
    List myList(5); // Creating a list with the capacity of 5
    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.add(40);
    myList.add(50);
    myList.display();
    cout << "Size: " << myList.getSize() << endl;
    myList.remove(20);
    myList.display();
    cout << "Size: " << myList.getSize() << endl;

    return 0;
}