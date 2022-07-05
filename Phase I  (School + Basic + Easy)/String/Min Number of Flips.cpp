// Link: https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1

// Problem Statement: 
// Given a binary string, that is it contains only 0s and 1s. We need to make this 
// string a sequence of alternate characters by flipping some of the bits, our goal 
// is to minimize the number of bits to be flipped.

// Solution:

//Using temporary string
int minFlips (string S)
{
    int n = S.length();
    int count0=0, count1=0;
    char x='0', y='1';
    
    for(int i=0;i<n;i++){
        
        if(S[i] != x)
            count0++;
            
        if(S[i] != y)
            count1++;
            
        swap(x,y);
    }
    
    return min(count0, count1);
}