// 8.	Modify selection sort to sort in descending order by always selecting the maximum instead of the minimum.

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
        int max_Index = i;
        for(int j = i + 1; j < n;j++){
            if(arr[max_Index] < arr[j] ){
                max_Index = j;
            }
        }
        if(i != max_Index){
        swap(arr[i],arr[max_Index]);
        count++;
        }
    }
    for(int i = 0;i < n;i++ ){
        cout << arr[i] << " ";
    }
    cout << endl << "the no of swap = "<< count << endl;
    return 0;
}