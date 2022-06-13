// Link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1/

// Problem Statement: Given an array, rotate the array by one position in clock-wise direction.

// Solution :

void rotate(int arr[], int n)
{
    int temp1 = arr[0];
    for(int i=1;i<n;i++){
        int temp2 = arr[i];
        arr[i] = temp1;
        temp1 = temp2;
    }
    arr[0] = temp1;
    
}