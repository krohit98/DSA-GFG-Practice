// Link: https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

// Problem Statement: 
// Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing 
// order, and a number X is given. The task is to find whether element X is present in the 
// matrix or not.

// Solution:

int matSearch (int N, int M, int matrix[][M], int x)
{
    int i=0, j=M-1;
    while(i<N && j>=0){
        if(matrix[i][j] == x)
            return 1;
        else if (matrix[i][j] > x)
            j--;
        else
            i++;
    }
    return 0;
}
