// Link: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

// Problem Statement: 
// Given an array a[] of size N which contains elements from 0 to N-1, you need to 
// find all the elements occurring more than once in the given array.

// Solution:

vector<int> duplicates(int arr[], int n) {
    for(int i=0;i<n;i++){
        int index = arr[i]%n;
        arr[index] += n;
    }
    vector<int> res;
    bool hasDuplicate = false;
    for(int i=0;i<n;i++){
        if(arr[i]/n>1){
            res.push_back(i);
            hasDuplicate = true;
        }
    }
    if(!hasDuplicate) res.push_back(-1);
    return res;
}