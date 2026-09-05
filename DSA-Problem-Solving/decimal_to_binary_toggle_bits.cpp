// Problem Statement –
// Joseph is learning digital logic subject which will be for his next semester. 
// He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question.
//  The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation.
//   Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.
// Constrains-
// 1<=N<=100
// Example 1:
// Input :
// 10  -> Integer
// Output :
// 5    -> result- Integer
// Explanation:
// Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    int binary[32];
    int i = 0;

    // Decimal to Binary
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    // Toggle the bits
    for (int j = 0; j < i; j++) {
        binary[j] = 1 - binary[j];
    }

    // Binary to Decimal
    int ans = 0;
    int power = 1;

    for (int j = 0; j < i; j++) {
        ans += binary[j] * power;
        power *= 2;
    }

    cout << ans << endl;

    return 0;
}