// Link:https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

// Problem Statement:
// Given a sorted array arr containing n elements with possibly duplicate elements, the task 
// is to find indexes of first and last occurrences of an element x in the given array.

// Solution:

// Function implementing modified Binary Search algorithm
int getPosition(int arr[], int n, int x, string pos){
   int start = 0, end = n-1, position = -1;
   while(start<=end){
       int mid = (start+end)/2;
       if(arr[mid] == x){
           position = mid;
           if(pos=="first")
               end = mid-1;
           else
               start = mid+1;
       }
       else if(arr[mid]>x){
           end = mid-1;
       }
       else{
           start = mid+1;
       }
   }
   return position;
}

// Function to find the positions and return the answer
vector<int> find(int arr[], int n , int x )
{
   int first = getPosition(arr,n,x,"first");
   int last = getPosition(arr,n,x,"last");
   
   return {first,last};
}