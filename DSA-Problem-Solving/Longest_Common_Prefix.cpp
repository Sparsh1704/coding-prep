// Q6. Problem Statement –

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input:
// strs = ["flower", "flow", "flight"]

// Output:
// "fl"

// Example 2:

// Input:
// strs = ["dog", "racecar", "car"]

// Output:
// ""

// Explanation:
// There is no common prefix among the input strings.

#include <bits/stdc++.h>
using namespace std;
//tc = O(n*m)
int main() {
    int n;
    cin>> n;
    vector<string> s(n);
    for (int i = 0; i< n;i++){
        cin>>s[i];
    }
    if (s.empty()){
        return 0;
    }
    sort(s.begin(),s.end());
    string ans ="";
    string first = s[0];
    string last = s[s.size()-1];
    for(int i = 0; i< first.length();i++){
        if(first[i] != last[i])  break;
        ans += first[i];
    }
    cout << ans << endl;
    
    // for(int i=0;i<s[0].length();i++){
    //     char ch = s[0][i];
    //     for(int j =1; j<s.size();j++){
    //         if (i ==s[j].length()||s[j][i]!=ch){
    //             cout<<s[0].substr(0,i)<<endl;
    //             return 0;
    //         }
    //     }
    // }
    return 0;

}
