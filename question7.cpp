// Extract the ith bit of a number

int solve(int n, int i){
    if(n && (1 << i)) return 1;
    else return 0;
}