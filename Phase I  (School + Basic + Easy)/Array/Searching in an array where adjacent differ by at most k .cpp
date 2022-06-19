// Link: https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1

// Problem Statement: 
// A step array is an array of integer where each element has a difference of at most k with its neighbor. Given a key x, 
// we need to find the index value of x if multiple elements exist, return the first occurrence of the key.

// Solution:

int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    int i=0;
    while(i<n){
        if(arr[i]==x){
            return i;
            break;
        }
        else{
            int diff = abs(arr[i]-x); // difference b/w current and required element
            int jumps = diff/k; //least number of jumps required from current element
            i += max(1,jumps);
        }
    }
    return -1;
}   