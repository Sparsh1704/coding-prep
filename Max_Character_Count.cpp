//Max Character Count Across Fixed-Size Chunks
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int length;
    cin >> length;
    int st = s.size()/length;
    //cout<<st;
    int maxcount = 0;
   for (int j = 0; j < s.size(); j += length) {

        int count = 0;

        for (int i = j; i < min(j + length, (int)s.size()); i++) {
            if (s[i] == 'a')
                count++;
        }

        maxcount = max(maxcount, count);
    }
    cout << maxcount;
    return 0;
}