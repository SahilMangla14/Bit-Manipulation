// Set the ith bit, doesn't matter whether the ith bit is set or not

// eg -> number is 1 1 0 0 1 0, set the 2nd bit
// number becomes  1 1 0 1 1 0

int solve(int n, int i){

    return (n | (1 << i));
}