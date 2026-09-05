// Q2. Problem Statement –

// Given an integer array Arr of size N, the task is to find the count of elements whose value is greater than all of its prior elements.

// Note:
// The 1st element of the array should be considered in the count of the result.

// For example,
// Arr[] = {7, 4, 8, 2, 9}

// As 7 is the first element, it will be considered in the result.
// 8 and 9 are also the elements that are greater than all of their previous elements.

// Since a total of 3 elements in the array meet the condition,
// the output = 3.

// Example 1:

// Input:
// 5 -> Value of N (represents size of Arr)

// 7 -> Value of Arr[0]
// 4 -> Value of Arr[1]
// 8 -> Value of Arr[2]
// 2 -> Value of Arr[3]
// 9 -> Value of Arr[4]

// Output:
// 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0;i < n; i++){
        cin>> arr[i];
    }   
    int count = 1;
    int gret = arr[0];
    for(int i = 1; i < n;i++){
        if(arr[i] > gret){
            count++;
            gret = arr[i];
        }
    }
    cout << count << endl;
    return 0; 
}