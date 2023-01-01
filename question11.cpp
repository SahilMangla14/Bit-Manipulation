// Check if the number is a power of 2

// Acutally what happens when we take and of n and n-1,
// all bits starting from the rightmost setbit till end becomes zero, and all bits before rightmost set bit remains as it is

bool solve(int n){
    if(n & (n-1) == 0) return true;
    else return false;
}