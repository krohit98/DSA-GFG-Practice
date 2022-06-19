// Link:https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1

// Problem Statement:
// Given an array of integers (A[])  and a number x, find the smallest subarray 
// with sum greater than the given value.

// Solution: (sliding window algorithm)

int smallestSubWithSum(int arr[], int n, int x)
{
    int i=0,j=0,start=0,end=n,sum=0;
    while(i<=j && i<n && j<=n){
        if(sum>x){
            if(j-i<=end-start){
                start=i;
                end=j;
            }
            sum-=arr[i];
            i++;
        }
        else{
            sum+=arr[j];
            j++;
        }
    }
    return end-start;
}