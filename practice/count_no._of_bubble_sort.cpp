// 3.	Count and print the total number of swaps bubble sort performs on a given array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0;i < n - 1;i++){
    
        for(int j = 0;j < n - i - 1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        
    }
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"no. of swap = "<< count << endl;

    return 0;
}