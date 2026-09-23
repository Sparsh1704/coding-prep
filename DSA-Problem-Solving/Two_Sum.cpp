// Given an integer array nums and an integer target, return indices of the two numbers such that they add
// up to target. Exactly one valid answer exists; you may not use the same element twice
// INPUT nums = [2,7,11,15], target = 9
// OUTPUT [0,1]

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // number -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 2, 4};
    int target = 6;

    vector<int> result = sol.twoSum(nums, target);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}