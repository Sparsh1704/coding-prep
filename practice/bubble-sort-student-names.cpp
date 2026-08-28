// 5.	Sort an array of student names alphabetically using bubble sort, without using any built-in sort function.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; 
    string s[n];
    cin.ignore();
    for(int i = 0;i < n;i++){
        getline(cin,s[i]);
    }
    for(int i = 0 ; i < n - 1;i++ ){
        for(int j = 0;j < n - 1 - i;j++){
            if(s[j]>s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout<< s[i] << " ";
    }
    return 0;
}