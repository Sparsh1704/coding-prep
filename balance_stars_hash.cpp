// Q1. Problem Statement –
// Given a string S (input consisting) of '*' and '#'. The length of the string is variable. 
// The task is to find the minimum number of '*' or '#' to make it a valid string. 
// The string is considered valid if the number of '*' and '#' are equal. The '*' and '#' can be at any position in the string.
// Note:
// The output will be a positive or negative integer based on the number of '*' and '#' in the input string.
// (* > #): positive integer
// (# > *): negative integer
// (# == *): 0
// Example 1:
// Input 1:
// ###***
// Output:
// 0
// Explanation:
// The number of '*' and '#' are equal, so the output is 0.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count1= 0;
    int count2= 0;
    for(char a: s){
        if(a == '#')
            count1++;
        
        if( a == '*')
            count2++;
        
    }
    cout<<count2-count1<<endl;   
    // if(count1 == count2) cout<<"0"<<endl;
    // if(count2 > count1) cout<<count2-count1<<endl;
    // if(count1 > count2) cout<<-(count1-count2)<<endl;

    return 0;
}