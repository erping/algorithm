/**
*Write a function that takes a string as input and reverse only the vowels of a string.
*Example 1:
*Given s = "hello", return "holle".
*Example 2:
*Given s = "leetcode", return "leotcede".
*/




class Solution {
public:
    string reverseVowels(string s) {
        string str(s);
     int len = s.size();
     if(len == 0)
        return s;
    int start = 0;
    int last = len - 1;
    while(start < last)
    {
        while(start < last && !isVowels(s[start]))
            start++;
        while(start < last && !isVowels(s[last]))
            last--;
        char temp = str[start];
        str[start] = str[last];
        str[last] = temp;
        start++;
        last--;
    }
    return str;
    }
    bool isVowels(char c)
	{
		if(c == 'a' || c=='o' ||c == 'e' || c == 'i' || c== 'u'|| c == 'A' || c == 'O' || c == 'E' || c == 'U' || c == 'I')
			return true;
		else
			return false;
	}
};