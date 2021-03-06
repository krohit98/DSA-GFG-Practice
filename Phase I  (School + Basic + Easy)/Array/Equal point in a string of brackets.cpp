// Link: https://practice.geeksforgeeks.org/problems/find-equal-point-in-string-of-brackets2542/1

// Problem Statement: 
// Given a string S of opening and closing brackets '(' and ')' only. The task is to find an equal 
// point. An equal point is an index such that the number of closing brackets on right from that 
// point must be equal to number of opening brackets before that point.

// Solution:

int findIndex(string str) {

        int open = 0;
        int close = count(str.begin(),str.end(),')');
        if(close == 0)
            return 0;
        if(close == str.length())
            return str.length();
        for(int i=0;i<str.length();i++){
            if(str[i] == ')')
                close--;
            else
                open++;
            if(open == close)
                return i+1;
        }
    }