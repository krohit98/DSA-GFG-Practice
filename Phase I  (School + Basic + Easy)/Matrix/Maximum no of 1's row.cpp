// Link: https://practice.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1

// Problem Statement: 
// Given a boolean 2D array, where each row is sorted. Find the row with the maximum 
// number of 1s.

// Solution:

int maxOnes (vector <vector <int>> &Mat, int N, int M)
{
    int i=0, j=M-1, ans=0;
    while(i<N && j>=0){
        if(Mat[i][j] == 1){
            ans = i;
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}
