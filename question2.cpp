// Swapping of two numbers using xor

void solve(int &a , int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}