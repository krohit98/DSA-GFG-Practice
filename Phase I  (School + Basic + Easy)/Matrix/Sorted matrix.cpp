// Link: https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1

// Problem Statement: 
// Given an NxN matrix Mat. Sort all elements of the matrix.

// Solution:

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) 
{
    vector<int> temp;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            temp.push_back(Mat[i][j]);
        }
    }
    sort(temp.begin(),temp.end());
    int k=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Mat[i][j] = temp[k];
            k++;
        }
    }
    return Mat;
}
