#include <iostream>
#include <algorithm>
using namespace std;

class Sorter {
    private:
        int arr[100];  
        int size;     

    public:
        void input() {
            cout << "Enter number of elements: ";
            cin >> size;
            cout << "Enter " << size << " elements:\n";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        }

        // This display current array contents
        void display() {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void bubbleSort(int n = -1) {
            if (n == -1) { // Default to full array
                n = size;
            }       
            if (n <= 0) { // Ignore invalid size
                return;          
            }
            if (n > size) { //Adjust n if it exceeds size
                n = size;
            }

            // Bubble sort implementation 
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }

            // Display sorted portion
            cout << "Sorted using Bubble Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }

        // Insertion Sort implementation )
        void insertionSort(int n = -1) {
            if (n == -1) { 
                n = size; 
            }
            if (n <= 0) { 
                return; 
            }
            if (n > size) { 
                n = size; 
            }

            // Insertion sort implementation 
            for (int i = 1; i < n; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }

            // Display sorted portion
            cout << "Insertion Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }

        // Selection Sort implementation 
        void selectionSort(int n = -1) {
            if (n == -1) { 
                n = size; 
            }
            if (n <= 0) { 
                return; 
            }
            if (n > size) { 
                n = size; 
            }

            // Selection sort implementation
            for (int i = 0; i < n - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < n; j++) {
                    if (arr[j] < arr[minIndex]) {
                        minIndex = j;
                    }
                }
                swap(arr[i], arr[minIndex]);
            }

            // Display sorted portion
            cout << "Selection Sort (first " << n << " elements):\n";
            for (int i = 0; i < n; ++i) cout << arr[i] << " ";
            cout << endl;
        }
};

int main() {
    Sorter s;  
    s.input();           
    s.bubbleSort();      
    s.insertionSort(4);  
    s.selectionSort(6);  

    return 0;
}