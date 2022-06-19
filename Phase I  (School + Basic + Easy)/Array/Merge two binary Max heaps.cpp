// Link: https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1

// Problem Statement: 
// Given two binary max heaps as arrays, merge the given heaps to form a new max heap.

// Solution: (Three possible solutions)

// First Solution - 
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {

    vector<int> ans;
    // copy elements of a in ans
    for(auto x:a)
        ans.push_back(x);
    // copy elements of b in ans
    for(auto y:b)
        ans.push_back(y);
    // sort ans in decreasing order
    sort(ans.begin(),ans.end(), greater<int>());
    return ans;
}

// Second Solution -
vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
    priority_queue<int>pq;
    vector<int> ans;
    for(auto x:a)
        pq.push(x);
    for(auto y:b)
        pq.push(y);
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    } 
    return ans;
}

// Third Solution -
void heapify(vector<int> &arr, int n, int i){
    if(i>=n)
        return;
        
    int parent = i, leftChild = 2*i+1, rightChild = 2*i+2;
    
    if(leftChild<n && arr[leftChild]>arr[parent])
        parent = leftChild;
            
    if(rightChild<n && arr[rightChild]>arr[parent])
        parent = rightChild;
    
    if(parent != i){
        swap(arr[i],arr[parent]);
        heapify(arr, n, parent);
    }
}

vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m){
    vector<int> merged;
    for(auto x:a)
        merged.push_back(x);
    for(auto y:b)
        merged.push_back(y);
        
    for(int i=((n+m)/2)-1;i>=0;i--)
        heapify(merged, n+m, i);
    
    return merged;
}