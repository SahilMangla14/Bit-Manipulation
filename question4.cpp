// Given a range (L-R), print the xor (L^L+1^L+2........R-1^R)

// Property -> xor[l,R] = xor[1,R] ^ xor[1,l-1]
// Same numbers xor cancel because they apparently give zero
// TC -> O(1)



