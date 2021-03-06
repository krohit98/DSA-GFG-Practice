// Link: https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1

// Problem Statement: 
// Your task is to implement  2 stacks in one array efficiently.

// Solution:

int i=0,j=1;
//Function to push an integer into the stack1.
void twoStacks :: push1(int x)
{
    top1++;
    arr[top1] = x;
}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2] = x;
}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    int top;
    if(top1>=0){
        top = arr[top1];
        top1--;
    }
    else
        top = -1;
    
    return top;
}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
    int top;
    if(top2<100){
        top = arr[top2];
        top2++;
    }
    else
        top = -1;
    
    return top;
}