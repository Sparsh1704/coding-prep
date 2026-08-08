// Q3. Problem Statement –

// At a fun fair, a street vendor is selling different colours of balloons. 
// He sells N number of different colours of balloons (B[]). 
// The task is to find the colour (odd) of the balloon which is present odd number of times in the bunch of balloons.

// Note:
// If there is more than one colour which is odd in number, 
// then the first colour in the array which is present odd number of times is displayed. 
// The colours of the balloons can all be either upper case or lower case in the array. If all the inputs are even in number, 
// display the message "All are even".

// Example 1:

// Input:

// 7 -> Value of N

// [r, g, b, b, g, y, y] -> B[]

// Elements B[0] to B[N-1], where each input element is separated by a new line.

// Output:

// r

// Explanation:

// From the input array above:

// r : 1 balloon
// g : 2 balloons
// b : 2 balloons
// y : 2 balloons

// Hence, 'r' is the only balloon colour which is present an odd number of times in the bunch.

#include<bits/stdc++.h>
using namespace std;

char fun(char arr[], int n){
    char ans;
    unordered_map<char,int>mp;
    for(int i = 0; i< n;i++){
        mp[arr[i]]++;
    }  
    for(int i = 0;i<n;i++){
        if(mp[arr[i]]%2 != 0){ 
            ans = arr[i];
            return ans;
        }
    }
    return  '\0';
}

int main(){
    int n;
    cin>> n;
    char arr[n];
    for(int i = 0;i < n; i++){
        cin>> arr[i];
    }   
    char ans = fun(arr, n);
    if(ans == '\0')
        cout<<"All are even"<<endl;
    else 
        cout<<ans<<endl;

    return 0; 
}