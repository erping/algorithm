/**
*Write a function that takes a string as input and returns the string reversed.
*Example:Given s = "hello", return "olleh".
*/


class Solution {
public:
    string reverseString(string s) {
        int len = s.size();
        if(len == 0)
            return s;
        int start = 0;
        int last = len-1;
        while(start < last)
        {
            char temp = s[start];
            s[start] = s[last];
            s[last] = temp;
            start++;
            last--;
        }
        return s;
        
    }
};