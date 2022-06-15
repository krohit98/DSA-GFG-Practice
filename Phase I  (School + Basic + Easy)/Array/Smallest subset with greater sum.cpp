// Link:https://practice.geeksforgeeks.org/problems/smallest-subset-with-greater-sum/1

// Problem Statement:
// You are given an array Arr of size N containing non-negative integers. Your task is to 
// choose the minimum number of elements such that their sum should be greater than the 
// sum of the rest of the elements of the array.

// Solution:

int minSubset(vector<int> &Arr,int N){
// Sort the array
    sort(Arr.begin(),Arr.end());
    
// Find sum of all elements
    long long totalSum = 0;
    for(int i=0;i<N;i++){
        totalSum+=Arr[i];
    }
    
// If all the elements in the array are 0, return N
    if(totalSum == 0) return N;
    
// Calculate and check for minimum sum required
    long long minSum = 0;
    for(int j=N-1;j>=0;j--){
        minSum+=Arr[j];
        totalSum-=Arr[j];
        if(minSum>totalSum)
            return N-j;
    }
}