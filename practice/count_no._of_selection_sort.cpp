// 7.	Implement selection sort and count the total number of swaps — compare this count with bubble sort on the same array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i = 0;i < n;i++){
        int min_Index = i;
        for(int j = i + 1; j < n;j++){
            if(arr[min_Index] > arr[j] ){
                min_Index = j;
            }
        }
        if(i != min_Index){
        swap(arr[i],arr[min_Index]);
        count++;
        }
    }
    for(int i = 0;i < n;i++ ){
        cout << arr[i] << " "; 
    }
    cout << endl << "the no of swap = "<< count << endl;
    return 0;
}