/*Two Sum using Hashing: Given a vector of integers and a target, find all unique pairs
whose sum equals the target using unordered map.*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    vector<int> arr1 = {3,1,2,4,3,8,1,9,4,1};
    int target = 10;
    unordered_map<int, bool> seen;
    cout<<"The pair which is equal to target: "<<target<<endl;  
    for (int num : arr1) {
        int complement = target - num;
        if (seen[complement] && !seen[num]) {
            int A = min(num, complement);
            int B = max(num, complement);
            cout << A << " , " << B<< endl;
        }
        seen[num] = true;
    }

    return 0;
}