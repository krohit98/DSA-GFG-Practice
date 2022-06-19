// Link: https://practice.geeksforgeeks.org/problems/three-way-partitioning/1

// Problem Statement: 
// Given an array of size n and a range [a, b]. The task is to partition the array 
// around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to 
// return the modified array.

// Solution:

void threeWayPartition(vector<int>& array,int a, int b)
{
    int k=-1, n=array.size();
    for(int i=0;i<n;i++){
        if(array[i]<a)
            swap(array[++k],array[i]);
    }
    for(int i=k+1;i<n;i++){
        if(array[i]<=b)
            swap(array[++k],array[i]);
    }
    for(int i=k+1;i<n;i++){
        if(array[i]>b)
            swap(array[++k],array[i]);
    }
}