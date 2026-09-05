//sum of first n prime number

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) 
        return false;

    if(num == 2)
        return true;

    if(num % 2 == 0)
        return false;
    for(int i = 3;i * i <= num; i++ ){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int sumofPrime(int n){
    int sum = 0;
    int count = 0;
    for(int i = 2; count < n;i++){
        if(isPrime(i)) {
            sum += i;
            count++;  
        }
    }
    return sum;
}

int main(){
    int n;
    cin>> n;
    cout <<sumofPrime(n)<<endl;
    return 0;

}