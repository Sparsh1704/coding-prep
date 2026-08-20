//2.	Modify bubble sort to stop early if no swaps happened in a pass (optimized bubble sort). Explain the best-case time complexity this gives.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0;i < n - 1;i++){
        bool no_of_swap = false;
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                no_of_swap = true;
            }
        }
        if(!no_of_swap) break;
    }
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}