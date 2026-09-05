// You are given three integers p, q, and r.

// Your task is to perform operations to make all three numbers equal.

// In one operation, you can:

// 1. Add 1 to any two of the numbers.
// 2. Subtract 1 from the third number.

// You need to determine and print the minimum number of operations required to make p, q, and r equal.

// If it is not possible to make all three numbers equal, print -1.

#include <bits/stdc++.h>
using namespace std;
int fun(int p,int q , int r){
    if( p == q && q == r ) return 0;
    vector<int>arr ={p,q,r};
    sort(arr.begin(),arr.end());
    int step = 0;
    while(true){
        arr[0] += 1;
        arr[1] += 1;
        arr[2] -= 1;
        step++;
        if(arr[0]==arr[1] && arr[1] == arr[2]) return step;
        sort(arr.begin(),arr.end());
        if(arr[0] == arr[1] && arr[1]+1 == arr[2] || arr[0]+1 == arr[1] && arr[1] == arr[2]) return -1;
        
    }
}

int main(){
    int p,q,r;
    cin>>p>>q>>r;
    cout<<fun(p,q,r);
    return 0 ;

}