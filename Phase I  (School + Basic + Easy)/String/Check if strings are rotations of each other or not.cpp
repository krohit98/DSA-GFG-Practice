// Link: https://practice.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

// Problem Statement: 
// Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the 
// strings are in lowercase.

// Solution: (Two solutions)

//Using temporary string
bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    for(int i=0;i<s1.length();i++){
        string temp = "";
        temp+=s1[s1.length()-1];
        s1.pop_back();
        temp+=s1;
        s1=temp;
        if(temp==s2)
            return true;
    }
    return false;
}

// Using concatenation and find()
bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    s1 = s1+s1;
    return (s1.find(s2)!=-1)?true:false;
}