// Link: https://practice.geeksforgeeks.org/problems/check-if-two-strings-are-k-anagrams-or-not/1

// Problem Statement: 
// Given two strings of lowercase alphabets and a value K, your task is to complete the given function 
// which tells if  two strings are K-anagrams of each other or not.
// Two strings are called K-anagrams if both of the below conditions are true.
// 1. Both have same number of characters.
// 2. Two strings can become anagram by changing at most K characters in a string.

// Solution:

bool areKAnagrams(string str1, string str2, int k) {
    if(str1.length() != str2.length())
        return false;
        
    unordered_map<char,int> m;
    
    for(int i=0;i<str1.length();i++)
        m[str1[i]]++;
    
    int count = 0;
    
    for(int j=0;j<str2.length();j++){
        if(m[str2[j]]>0)
            m[str2[j]]--;
        else
            count++;
    }
    
    return count<=k?true:false;
}