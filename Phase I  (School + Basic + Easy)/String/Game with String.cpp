// Link: https://practice.geeksforgeeks.org/problems/game-with-string4100/1

// Problem Statement: 
// Given a string s of lowercase alphabets and a number k, the task is to print 
// the minimum value of the string after removal of ‘k’ characters. The value of 
// a string is defined as the sum of squares of the count of each distinct character.

// Solution:

int minValue(string s, int k){

    sort(s.begin(),s.end());
    vector<int> freq (1,1);
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1])
            freq[freq.size()-1]++;
        else
            freq.push_back(1);
    }
    
    while(k--){
        sort(freq.begin(),freq.end());
        freq[freq.size()-1]--;
    }
    
    int minVal = 0;
    for(auto x:freq){
        minVal+=(x*x);
    }
        
    return minVal;
}