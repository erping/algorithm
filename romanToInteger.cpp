/**
*Given a roman numeral, convert it to an integer.
*Input is guaranteed to be within the range from 1 to 3999.
*/


class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int i = 0;
        int res[s.size()+1]= {0};
        for(;i < s.size(); i++)
        {
            switch(s[i])
            {
                case 'I': res[i] = 1;break;
                case 'V': res[i] = 5;break;
                case 'X': res[i] = 10;break;
                case 'L': res[i] = 50;break;
                case 'C': res[i] = 100;break;
                case 'D': res[i] = 500;break;
                case 'M': res[i] = 1000;break;
                default:  res[i] = 0;break;
            }
            
        }
        for(int i = 0; i < s.size(); i++)
             result += (res[i]>= res[i+1])?res[i]:-res[i];
        return result;
        
    }
};