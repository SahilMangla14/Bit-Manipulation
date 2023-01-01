// Generate all the subsets

// eg arr = [3,2,4]
// indexing  0 1 2

// 0   0 0 0  -> {}
// 1   0 0 1  -> {3}
// 2   0 1 0  -> {2}
// 3   0 1 1  -> {3,2}
// 4   1 0 0  -> {4}
// 5   1 0 1  -> {3,4}
// 6   1 1 0  -> {2,4}
// 7   1 1 1  -> {3,2,4}

// All subsets are generated

#include<bits/stdc++.h>
using namespace std;


// PowerSet Algorithm -> TC -> (pow(2,n) * n)
// TC -> pow(2,n) * n  // This algo will work for n at max 17,18,19 or 20
vector<vector<int>> solve(int arr[], int n){

    vector<vector<int>> v;
    for(int num = 0; num <= (1<<n-1); num++){
        vector<int> a;
        for(int bit = 0; bit <= n-1; bit++){
            if(num & (1<<bit)) a.push_back(arr[bit]);
        }
        v.push_back(a);
    }

    return v;
}




