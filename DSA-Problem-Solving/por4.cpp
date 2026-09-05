#include<iostream>
using namespace std;
int linearsearch(int n,int arr[],int target){
    bool found =false;
    for (int i = 0; i<n ;i++ ){
        if (arr[i] == target){
            found = true;
            return i;
        }
    }
    if(!found) {
        return 0;
    }
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<linearsearch(n,arr,target)<<endl;

}