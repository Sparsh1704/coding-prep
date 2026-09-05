// Q4. Problem Statement –

// There are total n number of Monkeys sitting on the branches of a huge Tree. 
// As travelers offer Bananas and Peanuts, the Monkeys jump down the Tree. 
// If every Monkey can eat k Bananas and j Peanuts. If total m number of Bananas and p number of Peanuts are offered by travelers, 
// calculate how many Monkeys remain on the Tree after some of them jumped down to eat.

// At a time one Monkey gets down and finishes eating and goes to the other side of the road. 
// The Monkey who climbed down does not climb up again after eating until the other Monkeys finish eating.

// Monkey can either eat k Bananas or j Peanuts. 
// If for the last Monkey there are less than k Bananas left on the ground or less than j Peanuts left on the ground, only that Monkey 
// can eat Bananas (< k) along with the Peanuts (< j).

// Write code to take inputs as n, m, p, k, j and return the number of Monkeys left on the Tree.

// Where,

// n = Total number of Monkeys

// k = Number of eatable Bananas by a single Monkey
//     (The Monkey that jumped down last may get less than k Bananas)

// j = Number of eatable Peanuts by a single Monkey
//     (The Monkey that jumped down last may get less than j Peanuts)

// m = Total number of Bananas

// p = Total number of Peanuts

// Remember that the Monkeys always eat Bananas and Peanuts, so there is no possibility of k and j having a value zero.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p,k,j;
    cin>>n>>m>>p>>k>>j;
    int cnt_ban = m/k;
    int banana_left = m % k;
    int cnt_pen = p / j;
    int peanut_left = p % j;
    if(banana_left != 0 || peanut_left != 0) cnt_ban++ ;
    int left = n - (cnt_ban+cnt_pen);
    cout<<left<<endl;
    return 0;
}