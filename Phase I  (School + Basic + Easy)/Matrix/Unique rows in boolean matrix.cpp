// Link: https://practice.geeksforgeeks.org/problems/unique-rows-in-boolean-matrix/1

// Problem Statement: 
// Given a binary matrix your task is to find all unique rows of the given matrix.

// Solution:

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    //map to store unique rows along with their count
    map<vector<int>, int> m;
    
    //result vector
    vector<vector<int>> ans;
    
    for(int i=0;i<row;i++){
        // create temporary vector from current row
        vector<int> temp(M[i], M[i]+col);
        
        //check if row does not exist in map (i.e., unique)
        if(!m[temp]){
            ans.push_back(temp); //push row to result vector
            m[temp]++; //put row in map
        }
    }
    
    return ans;
}
