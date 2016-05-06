/**
*Implement strStr().
*Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/





class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        if(len1 == len2 && len1 == 0)
            return 0;
        if(len2 > len1)
            return -1;
        if(len2 == 0)
            return 0;
        for(int i = 0; i < len1 - len2 +1; i++)
        {
            int m = i;
            int j ;
            for( j = 0; j < len2; j++)
            {
                if(haystack[m] != needle[j])
                {
                    break;
                }
                else
                    m++;
            }
            if(j == len2)
            {
                return i;
            }
        }
        return -1;
    }
};