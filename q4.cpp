// Q5. Problem Statement –

// Airport security officials have confiscated several items from the passengers at the security checkpoint. 
// All the items have been dumped into a huge box (array). Each item possesses a certain amount of risk [0,1,2]. Here, 
// the risk severity of the items is represented as an array[] of N integer values. 
// The task is to sort the items based on their levels of risk in the array. 
// The risk values range from 0 to 2.

// Example:

// Input:

// 7 -> Value of N

// [1, 0, 2, 0, 1, 0, 2] -> Elements of arr[0] to arr[N-1], where each input element is separated by a new line.

// Output:

// 0 0 0 1 1 2 2

// Explanation:

// The items are sorted according to their risk severity in ascending order (0, then 1, then 2).
#include<bits/stdc++.h>
using namespace std;

int fun_sort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if (arr[mid] == 1) mid++;
        else if (arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if (arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++)
        cin >> arr[i];
    fun_sort(arr,n);
    for(int i = 0; i< n;i++)
        cout<<arr[i]<<" ";
    return 0;
}