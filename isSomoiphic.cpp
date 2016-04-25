/**
*Given two strings s and t, determine if they are isomorphic.
*Two strings are isomorphic if the characters in s can be replaced to get t.
*All occurrences of a character must be replaced with another character while preserving the order of characters. 
*No two characters may map to the same character but a character may map to itself.
*For example,Given "egg", "add", return true.
*Given "foo", "bar", return false.
*Given "paper", "title", return true.
*/



class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
         return false;

    int sa[256] = {0};
    int ta[256] = {0};

    for(int i=0;i<s.length();i++)
    {
        if(sa[s[i]] == 0)
            sa[s[i]] = i+1;
        if(ta[t[i]] == 0)
            ta[t[i]] = i+1;

        if(sa[s[i]] != ta[t[i]])
            return false;
    }

    return true;
        
    }
};