// You are given the coefficients of a polynomial in an array poly[] of length n, and a specific value x.
//  Your task is to evaluate the polynomial at x.
// The polynomial is represented as poly[0]*x^(n-1) + poly[1]*x^(n-2) + ... + poly[n-1].
// The final result must be calculated modulo 109 + 7.
// Example 1:
// Input:
// n = 4
// poly = {2, -6, 2, -1}
// x = 3

// Output: 5

// Explanation:
// The polynomial is 2x³ - 6x² + 2x - 1.
// For x = 3, the value is 2*(3)³ - 6*(3)² + 2*(3) - 1 = 54 - 54 + 6 - 1 = 5.
// Constraints:
// 1 ≤ n ≤ 2000
// -1000 ≤ poly[i] ≤ 1000
// 1 ≤ x ≤ 1000
#include<iostream>
using namespace std;
int main(){
    int n , x;
    cin>> n;
    if(n < 1 || n > 2000) {
        cout<< "invaild input"<<endl;
        return 0;
    }
    int poly[n];
    for(int i = 0;i<n;i++){
        cin>>poly[i];
        if(poly[i] < -1000 || poly[i] > 1000){
            cout<< "invaild input"<<endl;
            return 0; 
        }
    }
    cin >> x;
    if(x < 1 || x > 1000){
        cout<< "invaild input"<<endl;
        return 0;
    }
    int ans = 0;
    int power = 1;
    for(int i= n-1;i>=0;i--){
        ans += poly[i]* power;
        power *= x;

    }
    cout << ans;

    return 0;
}