// You are given an integer array nums consisting only of the values 0, 1, and 2. 
// Your task is to rearrange the array in-place so that all 0s appear first, followed by all 1s, and then all 2s.

// You must solve this problem without using any built-in sorting function.

// Test Case 0:
// INPUT: nums = [2, 0, 2, 1, 1, 0]
// OUTPUT: [0, 0, 1, 1, 2, 2]
// Constraints:
// 1 <= nums.length <= 300
// nums[i] is 0, 1, or 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int mid = 0;
    int low = 0;
    int high = n-1;
    while(low <= high){
        if (nums[mid] == 0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid] == 1) mid++;
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << nums[i] <<" " ;
    }


    return 0;

}
