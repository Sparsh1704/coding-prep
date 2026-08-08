// You are given a string s and a collection of words, dict[].
// Your objective is to find every possible way to segment s into a sequence of space-separated words,
// where each word in the sequence is present in the provided dictionary.
// Note that words from the dictionary can be reused multiple times in a single segmentation.
// Sample Examples
// Example 1:
// Input:
// s = "catsanddog",
// dict[] = ["cat", "cats", "and", "sand", "dog"]
// Output:
// "cat sand dog"
// "cats and dog"
#include <bits/stdc++.h>
using namespace std;

void solve(string s, unordered_set<string> &dict, string ans) {

    if (s.length() == 0) {
        cout << ans << endl;
        return;
        //return where the last pause
    }

    for (int i = 1; i <= s.length(); i++) {

        string left = s.substr(0, i);

        if (dict.find(left) != dict.end()) {

            string right = s.substr(i);

            if (ans.empty())
                solve(right, dict, left);
            else
                solve(right, dict, ans + " " + left);
        }
    }
}

int main() {

    string s;
    cin >> s;

    int n;
    cin >> n;

    unordered_set<string> dict;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        dict.insert(word);
    }

    solve(s, dict, "");

    return 0;
}