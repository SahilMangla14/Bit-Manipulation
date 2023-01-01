// Count the number of set bits in a number

// eg -> 14 -> 1 1 1 0 , ans is 3

// Approach 1
// TC -> O(32) in worst case for int
// TC -> O(64) in worst case for long long

int solve1(int n){
    
    int cnt = 0;
    while(n!=0){
        if(n&1) cnt++;
        else n = n >> 1;
    }
    return cnt;
}


// Approach 2
// Turn of the rightmost bits till number becomes 0

// eg -> 1 1 0 1
//       1 1 0 0
//       1 0 0 0
//       0 0 0 0

// and we know how to turn of the rightmost set bit

// TC -> O(number of set bits)
int solve2(int n){

    int cnt = 0;
    while(n!=0){
        n = n & (n-1);
        cnt++;
    }

    return cnt;
}