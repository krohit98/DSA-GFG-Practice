// Link: https://practice.geeksforgeeks.org/problems/minimum-swaps-for-bracket-balancing2704/1

// Problem Statement: 
// You are given a string S of 2N characters consisting of N ‘[‘ brackets and N ‘]’ brackets. 
// A string is considered balanced if it can be represented in the for S2[S1] where S1 and S2 are 
// balanced strings. We can make an unbalanced string balanced by swapping adjacent characters. 
// Calculate the minimum number of swaps necessary to make a string balanced.
// Note - Strings S1 and S2 can be empty.

// Solution:

int minimumNumberOfSwaps(string S){
    // Extra closing brackets make the string unbalanced
    int n = S.length();
    int open = 0, close = 0, unbalanced = 0, swap = 0;
    for(int i=0;i<n;i++){
        if(S[i]=='['){
            open++;
            if(unbalanced > 0){
                swap += unbalanced;
                unbalanced--;
            }
        }
        else{
            close++;
            unbalanced = close-open;
        }
    }
    return swap;
}