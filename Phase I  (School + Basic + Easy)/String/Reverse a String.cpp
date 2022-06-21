// Link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1

// Problem Statement: 
// You are given a string s. You need to reverse the string.

// Solution:

string reverseWord(string str){
    
  int n = str.length();
  for(int i=0;i<n/2;i++){
      swap(str[i],str[n-1-i]);
  }
  return str;
}