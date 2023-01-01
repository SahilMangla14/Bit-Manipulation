// Given n and i, check if the ith bit in the binary represenation is set of not

// ans -> n & (1 << i)

// eg =>  1 1 0 0 1
//        0 1 0 0 0 
// Taking and of the above two numbers
//        0 1 0 0 0  , a non-zero number or more precisely the second number itself

// What if 3rd bit is not set
// eg =>  1 0 0 0 1
//        0 1 0 0 0
// Take and
//        0 0 0 0 0, we get zero

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int i){

    if(n & (1 << i)){
        cout << "Yes, bit is set" << endl;
    }
    else cout << "Bit is unset" << endl;
}