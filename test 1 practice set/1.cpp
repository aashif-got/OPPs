#include<iostream>
using namespace std;
class mylist{
    int size;
    int* arr;
    int capacity;
    // function to resize when full
    void resize() {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr; // free old memory
        arr = newArr;
        capacity = newCapacity;
    }
    public:
        mylist(int cap = 5){
            capacity = cap;
            arr = new int[capacity];
            size = 0;


        }
        // destructor
        ~mylist() {
        delete[] arr;
         }
        void add(int value){
            if (size  == capacity)
            {
                //cout <<"insufficient space!" << endl;
                resize(); // double the capacity
            }
            arr[size++] = value;
            
        }
        void insert(int index, int value){
            if (size  == capacity)
            {
                //cout <<"insufficient space!" << endl;
                resize(); // double the capacity
            }
            // Shift elements one position to the right
            // Start from the last element (at index = size - 1)
            // Stop when you reach the target index
            for (int  i = size; i > index; i--)
            {
                arr[i] = arr[i-1];// move element at (i-1) into position i , to free the index position where new element is to be inserted
                
                
                
            }
            // Now, the position "index" is free
            // Place the new value at that position
            arr[index] = value;
            // Increase size since we inserted a new element
            size++; 
            

        }
        void remove(int index){
            if (index < 0 || index >= size)
            {
                cout << "Index out of bounds!" << endl;
                return;
            }
            // Shift elements one position to the left
            for (int i = index; i < size - 1; i++)
            {
                arr[i] = arr[i + 1]; // move element at (i+1) into position i, to overwrite the element at "index"
            }
            size--; // Decrease size since we removed an element
        }
        void search(int value){
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == value)
                {
                    cout << "\n" <<value <<" is at index: " << i <<endl; // Return the index if the value is found
                }
               
            }
            
        }
        void display(){\
            cout << "List elements: ";
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            
        }
        int get_size(){
            return size;
        }

};

int main()
{
    mylist list;
    list.add(10);   
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);
    list.add(60);// this will trigger a resize 
    list.display();
    cout << "\nSize of the list: " << list.get_size() << endl;
    list.display();
    list.remove(2);

    list.display();
    cout << "\nSize of the list: " << list.get_size() << endl;
    list.search(30);
    
   

    return 0;
}