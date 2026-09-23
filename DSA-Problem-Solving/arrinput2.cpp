#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while (getline(ss,temp,','))
    {
        //char num = temp;
        arr.push_back(temp);
    }
    for (int a: arr){
        cout<<a<<" ";
    }
    return 0;
    
}