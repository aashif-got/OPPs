#include <iostream>
#include <string>
using namespace std;

class Dictionary {
    private:
        string keys[100];    
        string val[100];  
        int size;
    public:
        // Constructor
        Dictionary() {
            size = 0;
        }
        
        void add(const string& k, const string& value) {
            for (int i = 0; i < size; ++i) {
                if (keys[i] == k) {
                    val[i] = value; 
                    return;
                }
            }
            if (size < 100) {
                keys[size] = k;
                val[size] = value;
                size++;
            } else {
                cout << "Dictionary is full!" << endl;
            }
        }

        // Search for a key and return its value or an error message.
        string search(const string& key) {
            for (int i = 0; i < size; ++i) {
                if (keys[i] == key) {
                    return val[i];
                }
            }
            return "Key not found!";
        }

        // Display all key-value pairs currently stored.
        void display() {
            for (int i = 0; i < size; ++i) {
                cout << keys[i] << ": " << val[i] << endl;
            }
        }
};

int main() {
    Dictionary dict;
    dict.add("name", "aash");   
    dict.add("age", "nul");         
    dict.add("city", "chennai");  
    cout << "Search age: " << dict.search("age") << endl;         
    cout << "Search country: " << dict.search("country") << endl; 
    cout << "All key-value pairs in the dictionary:" << endl;
    dict.display();

    return 0;
}