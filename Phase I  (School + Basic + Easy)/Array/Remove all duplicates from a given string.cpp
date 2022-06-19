// Link: https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1

// Problem Statement: 
// Given a string Str which may contains lowercase and uppercase chracters. The task is to remove all 
// duplicate characters from the string and find the resultant string. The order of remaining characters 
// in the output should be same as in the original string.

// Solution:

string removeDuplicates(string str) {

    unordered_map<char,bool> m;
    string ans = "";
    for(int i=0;i<str.length();i++){
        if(!m[str[i]]){
            ans+=str[i];
            m[str[i]] = true;
        }
    }
    return ans;
}