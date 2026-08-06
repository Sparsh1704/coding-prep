// Q7. Problem Statement –
// Jack is always excited about Sunday. It is his favorite day, when he gets to play all day and goes cycling with his friends.
// So, every time when the month starts, he counts the number of Sundays he will get to enjoy.
// Considering the month can start with any day, be it Sunday, Monday, or so on, count the number of Sundays Jack will get within n number of days.
// Example 1:
// Input:
// mon -> Input string denoting the start day of the month.
// 13 -> Input integer denoting the number of days from the start of the month.
// Output:
// 2
// Explanation:
// If the month starts on Monday and we consider the first 13 days:
// Day 1  : Monday
// Day 2  : Tuesday
// Day 3  : Wednesday
// Day 4  : Thursday
// Day 5  : Friday
// Day 6  : Saturday
// Day 7  : Sunday
// Day 8  : Monday
// Day 9  : Tuesday
// Day 10 : Wednesday
// Day 11 : Thursday
// Day 12 : Friday
// Day 13 : Saturday

// There are 2 Sundays within these 13 days (the Sundays falling on Day 7 and the next Sunday after one full week).
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a,ans;
    cin>> a;
    unordered_map<string,int>m;
    m["mon"] = 7;
    m["tues"] = 6;
    m["wedn"] = 5;
    m["thur"] = 4;
    m["fri"] = 3;
    m["sat"] = 2;
    m["sun"] = 1;
    if (a-m[s]>1){
        ans = 1 +((a - m[s])/7);
    }
    cout<<ans<<endl;
    return 0;
}