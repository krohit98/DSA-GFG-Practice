// Link: https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

// Problem Statement: 
// Given an expression string x. Examine whether the pairs and the orders of 
// “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
// For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' 
// for exp = “[(])”.

// Solution:

bool ispar(string x)
{
    stack<char> st;
    for(int i=0;i<x.length();i++){
        if(!st.empty() && (( st.top() =='(' && x[i]==')' ) || ( st.top()=='{' && x[i]=='}' ) || ( st.top()=='[' && x[i]==']' )))
            st.pop();
                
        else
            st.push(x[i]);

    }
    return st.empty()?true:false;
}