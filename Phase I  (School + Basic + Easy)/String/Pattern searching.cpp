// Link: https://practice.geeksforgeeks.org/problems/pattern-searching4145/1

// Problem Statement: 
// Given a text and a pattern, the task is to check if the pattern exists in the 
// text or not.

// Solution:

int search(string text, string pat)
{
    if(text==pat) return 1;
    int l1=text.length(), l2=pat.length();
    string temp="";
    for(int i=0;i<l2;i++){
        temp+=text[i];
    }
    int j=l2-1;
    while(j<l1){
        if(temp==pat)
            return 1;
        temp+=text[++j];
        temp.erase(0,1);
    }
    return 0;
}