// Given an array of integers. Every number appears twice except one. Find that number

// approach -> Take xor of all the numbers. The number we finally get is the answer
// reason -> since while taking xor of all numbers, all numbers appearing twice will make xor to be zero but the only digit that is differnt can't make xor to be zero

int solve(int arr[], int n){

    int val = 0;
    for(int i=0;i<n;i++){
        val = val ^ arr[i];
    }

    return val;
}