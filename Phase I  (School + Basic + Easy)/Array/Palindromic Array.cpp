// Link: https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1


// Problem Statement:
// Given a Integer array A[] of n elements. Your task is to complete the function 
// PalinArray. Which will return 1 if all the elements of the Array are palindrome 
// otherwise it will return 0.


// Solution:

int PalinArray(int a[], int n)
{
    for(int i=0;i<n;i++){
        if(!isPalin(a[i]))
            return 0;
    }
    return 1;
}

bool isPalin(int num){
    int numOriginal = num;
    int numReversed = 0;
    while(num>0){
        numReversed = (numReversed*10)+(num%10);
        num = num/10;
    }
    return abs(numOriginal-numReversed)==0?true:false;
}