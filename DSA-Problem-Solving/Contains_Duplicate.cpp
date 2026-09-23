// Given an integer array nums, return true if any value appears at least twice, and false if every element is
// distinct.
// INPUT nums = [1,2,3,1]
// OUTPUT true

#include<bits/stdc++.h>
using namespace std;

bool ContainsDuplicates(vector<int>nums){
    unordered_set<int>st;

    for(int i = 0;i < nums.size();i++){
        if(st.find(nums[i]) != st.end()){
            return true;
        }
        st.insert(nums[i]);
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout<<boolalpha <<ContainsDuplicates(nums)<<endl;
    return 0;
}