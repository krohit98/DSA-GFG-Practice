// Link: https://practice.geeksforgeeks.org/problems/closest-strings0611/1

// Problem Statement: 
// Given a list of words followed by two words, the task to find the minimum 
// distance between the given two words in the list of words

// Solution:

int shortestDistance(vector<string> &s, string word1, string word2)
{
    int i1=-1, i2=-1, min=INT_MAX;
    for(int i=0;i<s.size();i++){
        if(s[i] == word1){
                i1 = i;   
        }
            
        if(s[i] == word2){
                i2 = i;
        }
        
        if(i1>=0 && i2>=0){
            min = abs(i2-i1)<min?abs(i2-i1):min;
        }
            
    }
    return min;
}