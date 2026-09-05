#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    string s;
    //cin>> s;
    //problem:- it will not take string after space
    cin.ignore();
    getline(cin,s);
    //problem:- it will not take the input bcoz "1            " it will take the space after the 1 as string input
    //solution use cin.ignore() after int input
    cout<<n<<" "<< s<<endl;
    return 0;
}