#include<iostream>
using namespace std;
int main()
{
int n;
int min=0,max =0;
cout<<"enter the no. element in the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

for(int i=0;i<n;i++){
    if(i==0){
        min = max = arr[i];
    }if(arr[i]<min){
        min = arr[i];
    }if(arr[i]>max){
        max = arr[i];
    }
}
cout<<"max element ="<<max<<endl<<"min element ="<<min<<endl;
return 0;
}