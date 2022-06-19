// Link: https://practice.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1

// Problem Statement: 
// Given two sorted arrays A and B of size M and N respectively. Each array may have 
// some elements in common with the other array. Find the maximum sum of a path from 
// the beginning of any array to the end of any of the two arrays. We can switch from 
// one array to another array only at the common elements.Both the arrays are sorted.

// Solution:

int max_path_sum(int A[], int B[], int m, int n)
{
    int i=0,j=0,sumA=0, sumB=0, maxSum=0;
    
    while(i<m && j<n){
        if(A[i]==B[j]){
            sumA+=A[i];
            sumB+=B[j];
            maxSum+=max(sumA,sumB);
            sumA=0; 
            sumB=0;
            i++;
            j++;
        }
        else if(A[i]<B[j]){
            sumA+=A[i];
            i++;                
        }
        else{
            sumB+=B[j];
            j++;                
        }
    }
    
    while(i<m){
        sumA+=A[i];
        i++;
    }
    
    while(j<n){
        sumB+=B[j];
        j++;
    }
    
    maxSum+=max(sumA,sumB);
    
    return maxSum;
}