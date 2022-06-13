// Link: https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

// Problem Statement: 
// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. 
// Task is to check whether a2[] is a subset of a1[] or not. 
// Both the arrays can be sorted or unsorted.

// Solution:

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    string res = "Yes";
    for(int j=0;j<m;j++){
        if(s.find(a2[j])==s.end()){
            res = "No";
        }
    }
    return res;
}