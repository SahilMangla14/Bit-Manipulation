// Every integer appears twice and two integers appear once
// Find those two integers

// Approach1 -> Brute Force -> TC => O(n^2)
// Approach2 -> Maps -> TC => O(nlogn), SC -> O(N)
// Approach3 -> bit manipulation -> TC -> O(N)

// 1) take xor of all the numbers
// 2) now the rightmost set bit of the xored number is one because of one number have zero at that bit another having one
// 3) two sets -> one set will have all numbers with 1 at that bit and another set with 0 at that bit
// 4) Take xor of the two sets, we will have the number

// example ->  a = [1,2,7,2,1,4,4,3,5,3];
// xor or a => 5 ^ 7 == 2
// 5 -> 1 0 1
// 7 -> 1 1 1
// xor  0 1 0

// rightmost one in xor is at bit index = 1
// set 1 (bit at index1 0) -> 1 5 1 4 4
// set 2 (bit at index1 1) -> 2 2 7 3 3
// xor of set1 -> 5
// xor of set2 -> 7
// answers -> 5 and 7

// code

#include<bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
    int x =  0;
    // O(N)
    for(int i=0;i<n;i++){
        x = x ^ a[i];
    }

    int count = 0;
    // O(32)
    while(x){
        if(x&1) break;
        else{
            count++;
            x = x >> 1;
        }
    }

    // count will point to the index
    int num1 = 0, num2 = 0;
    // O(N)
    for(int i=0;i<n;i++){
        if(a[i] && (1 << count)) num1 = num1 ^ a[i];
        else num2 = num2 ^ a[i];
    }

    cout << num1 << ' ' << num2 << endl;

}


