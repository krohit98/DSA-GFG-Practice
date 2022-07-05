// Link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

// Problem Statement: 
// Given a string S, check if it is palindrome or not.

// Solution:

int isPalindrome(string S)
{
    int i=0, j=S.length()-1;
    while(i<=j){
        if(S[i]!=S[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}