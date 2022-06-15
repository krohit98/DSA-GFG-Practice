// Link:https://practice.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1

// Problem Statement:
// You are given two arrays A and B of equal length N. Your task is to pair each element of array A 
// to an element in array B, such that the sum of the absolute differences of all the pairs is minimum.

// Solution:

long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long sum=0;
        for(int i=0;i<N;i++){
            sum+=abs(A[i]-B[i]);
        }
        return sum;
    }