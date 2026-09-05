#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int freq[256] = {0};
    for(char ch:s){
        freq[(unsigned char)ch]++;
    }
    for(char ch:s){
        if (freq[(unsigned char)ch] > 0){
            cout<<ch<<" "<< freq[(unsigned char)ch] << endl;
            freq[(unsigned char)ch] = 0;
        }
    }
    return 0;


}