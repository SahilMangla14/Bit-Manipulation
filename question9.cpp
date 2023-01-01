// Clear the ith bit


// eg -> 1 1 0 0 1 0, set the 4th bit to be zero
//     & 1 0 1 1 1 1   -> this can easily be achieved by ~(1 << i)
// ans   1 0 0 0 1 0 which is what we require

// Here mask will become -> ~(1 << i)


void solve(int n, int i){
    int mask = ~(1 << i);
    n = n & mask;
}


