/*Q5. Sliding Window Maximum: Given an array and a window size k, find the maximum
in each sliding window using a deque.*/
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
int main() {
    vector<int> arr1 = {1, 11, 5, 3, 8};
    int k = 3;
    deque<int> d;    
    vector<int> Ans;  
    for (int i = 0; i < arr1.size(); i++) {
        if (!d.empty() && d.front() <= i - k)
            d.pop_front();
        while (!d.empty() && arr1[d.back()] < arr1[i])
            d.pop_back();
        d.push_back(i);
        if (i >= k - 1)
            Ans.push_back(arr1[d.front()]);
    }
    for (int x : Ans)
        cout << x << " ";
}