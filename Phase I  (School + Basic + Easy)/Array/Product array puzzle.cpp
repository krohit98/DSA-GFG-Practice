// Link:https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1

// Problem Statement:
// Given an array nums[] of size n, construct a Product Array P (of same size n) 
// such that P[i] is equal to the product of all the elements of nums except nums[i].

// Solution: 

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        
    vector<long long int> ltr(n), rtl(n), ans;
    ltr[0] = 1;
    rtl[n-1] = 1;
    // left to right multiplication array
    for(int i=1;i<n;i++){
        ltr[i] = ltr[i-1]*nums[i-1];
    }
    // right to left multiplication array
    for(int j=n-2;j>=0;j--){
        rtl[j] = rtl[j+1]*nums[j+1];
    }

    for(int i=0;i<n;i++){
            ans.push_back(ltr[i]*rtl[i]);
    }
    
    return ans;
}