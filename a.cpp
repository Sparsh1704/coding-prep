#include <bits/stdc++.h>
using namespace std;
//time ,space -O(n)
void rotateRight(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main() {
    //if we want comma seperated value
    string input;
    getline(cin, input);
    // Replace commas with spaces
    for (char &ch : input) {
        if (ch == ',') {
            ch = ' ';
        }
    }
    // Convert string into integers
    stringstream ss(input);
    vector<int> arr;
    int x;
    while (ss >> x) {
        arr.push_back(x);
    }

    int k;
    cin >> k;

    rotateRight(arr, k);

    for (int i = 0; i < arr.size(); i++) {
        if (i > 0) cout << ",";
        cout << arr[i];
    }

    return 0;
}