// Link: https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

// Problem Statement: 
// You are given a string S, the task is to reverse the string using stack.

// Solution:

char* reverse(char *S, int len)
{
    stack<char> st;
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=st.top();
        st.pop();
    }
    return S;
}