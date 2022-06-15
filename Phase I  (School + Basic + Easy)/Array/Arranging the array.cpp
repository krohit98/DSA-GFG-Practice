// Link:https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1

// Problem Statement:
// You are given an array of size N. Rearrange the given array in-place such that 
// all the negative numbers occur before positive numbers.(Maintain the order of 
// all -ve and +ve numbers as given in the original array).

// Solution: (Multiple solutions with different time and space complexities are present)

// Time Complexity: O(n), Space Complexity: O(n)
void Rearrange(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        arr[i]<0?neg.push_back(arr[i]):pos.push_back(arr[i]);
    }
    int i=0;
    for(auto x:neg){
        arr[i]=x;
        i++;
    }
    for(auto x:pos){
        arr[i]=x;
        i++;
    }
}