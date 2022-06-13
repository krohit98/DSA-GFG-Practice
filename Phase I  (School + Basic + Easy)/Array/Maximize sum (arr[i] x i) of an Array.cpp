// Link:https://practice.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1

// Problem Statement:
// Given an array A of N integers. Your task is to write a program to find the maximum 
// value of ∑arr[i]*i, where i = 0, 1, 2,., n 1.
// You are allowed to rearrange the elements of the array.
// Note: Since output could be large, hence module (10^9)+7 and then print answer.
// Constraints:
// 1 ≤ N ≤ 10^7  -----> Important to keep in mind
// 1 ≤ Ai ≤ N

// Solution:

int Maximize(int a[],int n)
{
    sort(a,a+n);
    long long sum=0;
    for(long long int i=0;i<n;i++){
        sum+=a[i]*i;
    }
    return sum % 1000000007;
}