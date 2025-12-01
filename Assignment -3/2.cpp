/*Next Greater Element: For each element in an array, find the next greater element to
its right using a stack.*/
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main() {
    vector<int> arr = {5,3,8,12,11,18};
    stack<int> s;
    cout<<"The Next Greater Element to its Right--"<<endl;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty())
            cout << arr[i] << " -> -1" << endl;
        else
            cout << arr[i] << " -> " << s.top() << endl;

        s.push(arr[i]);
    }
    return 0;
}