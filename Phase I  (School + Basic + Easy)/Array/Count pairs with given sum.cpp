// Link: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

// Problem Statement: 
// Given an array of N integers, and an integer K, find the number of pairs of elements 
// in the array whose sum is equal to K.

// Solution:

int getPairsCount(int arr[], int n, int k) {

        unordered_map<int,int> m;
        int count = 0;
        for(int i=0;i<n;i++){
            int val = k-arr[i];
            if(m[val])
                count+=m[val];
            m[arr[i]]++;
        }
        return count;
    }