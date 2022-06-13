// Link:https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

// Problem Statement:
// Given an array Arr of N positive integers. Your task is to find the elements whose 
// value is equal to that of its index value ( Consider 1-based indexing ).

// Solution:

vector<int> valueEqualToIndex(int arr[], int n){
	
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        if(arr[i] == i+1)
	            ans.push_back(arr[i]);
	    }
	    return ans;
	}
