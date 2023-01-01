// Check if n is even or odd

// concept -> The last bit of any odd number is set and last bit of any even number is unset


#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n&1) cout << "odd" << endl;
    else cout << "even" << endl;
}

