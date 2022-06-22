// Link: https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1

// Problem Statement: 
// Given a sequence of strings, the task is to find out the second most repeated (or frequent) string 
// in the given sequence.

// Solution:

string secFrequent (string str[], int n)
{
    unordered_map<string, int> m;
    for(int i=0;i<n;i++){
        m[str[i]]++;
    }
    int max1 = 0;
    for(int i=0;i<n;i++){
        max1 = max(m[str[i]],max1);
    }
    int max2 = 0;
    string ans;
    for(int i=0;i<n;i++){
        if(m[str[i]]>max2&&m[str[i]]<max1){
            max2 = m[str[i]];
            ans = str[i];
        }
    }
    return ans;
}