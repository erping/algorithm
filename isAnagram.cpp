/**Given two strings s and t, write a function to determine if t is an anagram of s.
*For example,
*s = "anagram", t = "nagaram", return true.
*s = "rat", t = "car", return false.
**/



class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[256] = {0};
        int i = 0;
        while(s[i]!='\0')
        {
            a[s[i++]]++;
        }
        int j = 0;
        while(t[j]!='\0')
        {
            a[t[j++]]--;
        }
        for(int k = 0; k < 256; k++)
        {
            if(a[k]!=0)
                return false;
        }
        return true;
        
    }
};