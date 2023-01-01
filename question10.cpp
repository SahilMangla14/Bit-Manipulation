// Remove the last set bit i.e. the rightmost set bit

// eg -> 1 1 0 1 1 0
// number becomes 1 1 0 1 0 0

// ans -> n & (n-1) will remove the rightmost set bit

// another way -> ans n & ~(n & -n)
// reason (n & -n) gives the rightmost set bit
// now to remove that bit from the number we will do, n & ~(n & -n)

#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void solve(int n){
    int val1 = n;
    int val2 = n;

    val1 = val1 & (val1-1);
    val2 = val2 & ~(val2 & -val2);

    if(val1==val2){
        cnt++;
    }
}

int main(){
    for(int i=-1;i<=123;i++){
        solve(i);
    }

    cout << cnt << endl;
    return 0;
}


// Important point -> count cannot be declared as global variable if we use namespace std because it already has count 
// However, we can use it as local varibale


int main(){
    return 0;
}