// Link: https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

// Problem Statement: 
// Given an array A[] of size N and a positive integer K, find the first negative integer for each and every 
// window(contiguous subarray) of size K.

// Solution:

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {

    vector<long long> ans;
    queue<long long> q;
    for(int i=0;i<K-1;i++){
        if(A[i]<0) q.push(A[i]);
    }
    for(int i=K-1;i<N;i++){
        if(A[i]<0) q.push(A[i]);
        if(!q.empty()){
            ans.push_back(q.front());
            if(q.front()==A[i-K+1])
                q.pop();
        }
        else
            ans.push_back(0);
    }
    return ans;
 }