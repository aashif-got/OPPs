/* 3Sum Problem: Find all unique triplets in an array whose sum equals zero using sorting
and the two-pointer technique.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> NUM = {7,-1,9,-5, 0, 1,-3, -9, -1,2,1,3,-3};
    vector<vector<int>> result;
    sort(NUM.begin(), NUM.end());
    for (int i = 0; i < NUM.size(); i++)
    {
        if (i > 0 && NUM[i] == NUM[i - 1])
            continue;
        int left = i + 1;
        int right = NUM.size() - 1;
        while (left < right)
        {
            int sum = NUM[i] + NUM[left] + NUM[right];
            if (sum == 0)
            {
                result.push_back({NUM[i], NUM[left], NUM[right]});
                while (left < right && NUM[left] == NUM[left + 1])
                    left++;
                while (left < right && NUM[right] == NUM[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < 0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    cout<<"These are the pair were their sum is equal to zero..."<<endl;
    for (auto it : result) {
        cout << it[0] << " " << it[1] << " " << it[2] << endl;
    }
    return 0;
}