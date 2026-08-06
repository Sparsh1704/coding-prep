// You are given two integers i and j.

// Your task is to calculate and print the sum of all integers from i to j, inclusive.

#include<bits/stdc++.h>
using namespace std;

int range_sum(int i,int j){
    return ((j * (j + 1) / 2)-( i * (i - 1) / 2)) ;
}

int main(){
    int i , j;
    cin>> i >> j;
    if(i >= j||i < 0|| j > 9999) cout << "Invalid input i & j , i <= j < 9999"<< endl;
    else cout << range_sum(i,j) << endl;
    return 0;
}