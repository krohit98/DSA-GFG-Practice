// Link:https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1

// Problem Statement:
// Write a program to implement a Stack using Array. Your task is to use the class as 
// shown in the comments in the code editor and complete the functions push() and pop() 
// to implement a stack. 

// Solution:

//Function to push an integer into the stack.
void push(struct Stack* stack, int item)
{
    stack->top++;
    stack->array[stack->top] = item;
}


//Function to remove an item from top of the stack.
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
        return -1;
    int item = stack->array[stack->top];
    stack->top--;
    return item;
}