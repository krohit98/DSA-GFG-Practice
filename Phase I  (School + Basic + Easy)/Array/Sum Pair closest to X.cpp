// Link:https://practice.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1

// Problem Statement:
// Given a sorted array arr[] of size N and a number X, find a pair in array whose sum is closest to X.

// Solution:

vector<int> sumClosest(vector<int>arr, int x)
{
    int i=0,j=arr.size()-1, sum=0, leastDiff = x;
    int first=i,second=j; // closest pair positions
    while(i<j){
        sum=arr[i]+arr[j];
        /* Check if sum obtained by current position of pointers is closer to x than last closest sum */
        if(abs(sum-x)<leastDiff){
            first = i;
            second = j;
            leastDiff = abs(sum-x);
        }
        
        if(sum>x)
            j--;
        else
            i++;
    }
    return {arr[first], arr[second]};
}