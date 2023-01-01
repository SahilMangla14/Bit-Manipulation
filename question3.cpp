// Given n, print xor of all the numbers from 1 to n
// Do without loop


// observe pattern


// n = 1 ->    1
// n = 2 ->    3
// n = 3 ->    0
// n = 4 ->    4
// n = 5 ->    5
// n = 6 ->    7
// n = 7 ->    0
// n = 8 ->    8


#include<bits/stdc++.h>
using namespace std;

// O(1) solution
void solve(int n){
    if(n%4==0) cout << n << endl;
    else if(n%4==1) cout << 1 << endl;
    else if(n%4==2) cout << n+1 << endl;
    else if(n%4==3) cout << 0 << endl;
}