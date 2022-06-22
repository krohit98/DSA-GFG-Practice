// Link: https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1

// Problem Statement: 
// Given a string S delete the characters which are appearing more than once consecutively.

// Solution:

string removeConsecutiveCharacter(string S)
{
    int n = S.length();
    string ans="";
    int i=0;
    while(i<n){
        if(i+1==n || S[i]!=S[i+1])
            ans+=S[i];
        i++;
    }
    return ans;
}