#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    int num ;
    while (ss>>num)
    {
        arr.push_back(num);
    }
    for (int a: arr){
        cout<<a<<" ";
    }
    return 0;
    
}

//or

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>arr;
    string temp;
    while (getline(ss,temp,' '))
    {
        int num =stoi(temp);
        arr.push_back(num);
    }
    for (int a: arr){
        cout<<a<<" ";
    }
    return 0;
    
}