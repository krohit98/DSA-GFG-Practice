// Link: https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

// Problem Statement: 
// Given a square matrix of size N x N. The task is to rotate it by 90 degrees in 
// anti-clockwise direction without using any extra space. 

// Solution:

void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // reverse the inner vectors (rows of matrix)
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        // transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    } 

// Additional - To rotate matrix 90 degrees clockwise:
// 1. Transpose
// 2. Reverse rows of the matrix