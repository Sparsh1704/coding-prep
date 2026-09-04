#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    char fir = s[0];
    int n = s.size();
    char sec = s[n-1];


    cout<<n<<" "<< fir <<" "<<sec <<endl;
    return 0;

}