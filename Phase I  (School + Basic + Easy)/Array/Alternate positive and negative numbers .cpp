// Link: https://practice.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1

// Problem Statement: 
// Given an unsorted array Arr of N positive and negative numbers. Your task is to create an 
// array of alternate positive and negative numbers without changing the relative order of 
// positive and negative numbers.

// Solution:

void rearrange(int arr[], int n) {
	
	    vector<int> pos, neg;
	    for(int i=0;i<n;i++){
	        if(arr[i]>=0)
	            pos.push_back(arr[i]);
	        else
	            neg.push_back(arr[i]);
	    }
	    int i=0,j=0;
	    while(i<n && j<pos.size() && j<neg.size()){
	        arr[i] = pos[j];
	        arr[i+1] = neg[j];
	        i+=2;
	        j++;
	    }
	    
	    while(j<pos.size()){
	        arr[i] = pos[j];
	        i++;j++;
	    }
	    
	    while(j<neg.size()){
	        arr[i] = neg[j];
	        i++;j++;
	    }
	}