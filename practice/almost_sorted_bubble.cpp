#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copy original array
    int sorted[n];

    for(int i = 0; i < n; i++) {
        sorted[i] = arr[i];
    }

    // Sort arr
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    int first = -1;
    int second = -1;

    // Find different positions
    for(int i = 0; i < n; i++) {
        if(arr[i] != sorted[i]) {

            if(first == -1)
                first = i;

            else if(second == -1)
                second = i;

            else {
                cout << "Array cannot be sorted using one swap";
                return 0;
            }
        }
    }

    // Already sorted
    if(first == -1) {
        cout << "Array is already sorted";
    }
    else {
        // Try one swap in original array
        swap(sorted[first], sorted[second]);

        bool possible = true;

        for(int i = 0; i < n; i++) {
            if(arr[i] != sorted[i]) {
                possible = false;
                break;
            }
        }

        if(possible)
            cout << "Array can be sorted using one swap";
        else
            cout << "Array cannot be sorted using one swap";
    }

    return 0;
}