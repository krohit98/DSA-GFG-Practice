// Link: https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

// Problem Statement: 
// Given a string you need to print the size of the longest possible substring that has exactly K 
// unique characters. If there is no possible substring then print -1.

// Solution:

int longestKSubstr(string s, int k) {
    unordered_map<char,int> m;
    int i=0,j=0,maxLength=-1,n=s.size();
    while(j<=n){
        if(m.size()==k){
            maxLength = max(j-i, maxLength);
            m[s[j]]++;
            j++;
        }
        else if(m.size()<k){
            m[s[j]]++;
            j++;
        }
        else{
            m[s[i]]--;
            if(m[s[i]] == 0)
                m.erase(s[i]);
            i++;
        }
    }
    return maxLength;
}