// Bit masking 

// set data structure -> 
// add -> O(logn)
// remove -> O(logn)
// It prints all elements in ascending order

// But we want to perform both operations in
// SC -> O(1)  && TC -> O(1)

// mask -> long long x = 0
// add(5) -> x | (1 << 5) -> x = 32 
// add(1) -> x | (1 << 1) -> x = 33
// add(5) -> x | (1 << 5) -> x = 33
// add(3) -> x | (1 << 3) -> x = 41
// remove(5) -> x ^ (1 << 5) -> x = 9

// How to print
// for(bit = 0 -> 60)
//    if(x & (1 << bit))
//       print(bit)