/*Write a function to find the longest common prefix string amongst an array of strings.
*/




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int num = strs.size();
        string result;
        if(num == 0)
            return result;
        int min = strs[0].size();
        for(int i = 1; i < num; i++)
        {
            int len = strs[i].size();
            if(len < min)
                min = len;
        }
        for(int i = 0; i < min; i++)
        {
            for(int j = 1; j < num; j++)
            {
                if(strs[j][i] != strs[0][i])
                {
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
    }
};