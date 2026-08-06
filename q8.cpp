//you are given an array contains one single element and all other element comes twice 
// your task is to find the single element
//example :- n = 5 
// arr = [2,2,3,3,4,4,5]
// output = 5
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];
    int num = 0;
    for(int i = 0;i < n;i++){
        num ^= arr[i];
    }
    cout<<num<<endl;
    return 0 ;

}