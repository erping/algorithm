/**The gray code is a binary numeral system where two successive values differ in only one bit.
*
*Given a non-negative integer n representing the total number of bits in the code, print the
* sequence of gray code. A gray code sequence must begin with 0.
*
*For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
**/


class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res(1,0);
        int i;
        for(i = 0; i < n; i++)
        {
            int cur = res.size();
            while(cur)
            {
                cur--;
                int temp = (1<<i);
                temp += res[cur];
                res.push_back(temp);
            }
        }
        return res;
        
    }
};