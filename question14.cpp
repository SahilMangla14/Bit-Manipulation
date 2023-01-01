// Given N integers, print the xor of all subsets

// eg -> arr -> [1,3,2]
//       subsets -> [] -> 0
//                  [1] -> 1
//                  [2] -> 2
//                  [3] -> 3
//                  [1,2] -> 3
//                  [2,3] -> 1
//                  [1,3] -> 2 
//                  [1,2,3] -> 0
// xor of all -> 0 if(n>=2) else number itself

// If take all the subsets, every number appears even number of times
// That is why, ans is always 0