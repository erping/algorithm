/*
Given a string, find the length of the longest substring without repeating characters.
Examples:
Given "abcabcbb", the answer is "abc", which the length is 3.
Given "bbbbb", the answer is "b", with the length of 1.
Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring,
 "pwke" is a subsequence and not a substring.
 */


 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> a(256,-1);
        int longest = 0;
        int m = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(a[s[i]] != -1)
                 m = max(a[s[i]]+1,m);
            a[s[i]] = i;   //change every time
            longest = max(longest,i-m+1);
        }
        return longest;
    }
};