// Link:https://practice.geeksforgeeks.org/problems/swap-and-maximize5859/1

// Problem Statement:
// Given an array a[ ] of N elements. Consider array as a circular array i.e. element 
// after an is a1. The task is to find maximum sum of the absolute difference between 
// consecutive elements with rearrangement of array elements allowed i.e. after any 
// rearrangement of array elements find:
// |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1|.

// Solution:

long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);
    int i=0, j=n-1;
    long long sum = 0;
    while(i<j){
        sum+=abs(arr[i]-arr[j]);
        i++;
        sum+=abs(arr[i]-arr[j]);
        j--;
    }
    sum+=abs(arr[i]-arr[0]);
    return sum;
}