#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the no. element in the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cout<<"enter the element u want to find"<<endl;
cin>> k;

for(int i=0;i<n;i++){
    if(arr[i]==k){
        cout << "Element " << k << " found at index " << i << endl;
    }
}
return 0;
}