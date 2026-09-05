#include<bits/stdc++.h>
using namespace std;
void leftRotate(vector<int>& arr, int k) {
    int n = arr.size();

    k = k % n;

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

    reverse(arr.begin(), arr.end());
}
int main(){
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
    cout<<"enter the no.  u want to shift array"<<endl;
    cin>>k;
    
    leftRotate(arr,k);
    cout << "Array after left rotation: ";
    for (int i = 0; i < arr.size(); i++) {
        if (i > 0) cout << ",";
        cout << arr[i];
    }
    return 0;

}