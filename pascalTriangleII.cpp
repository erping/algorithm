/**
*Given an index k, return the kth row of the Pascal's triangle.
*For example, given k = 3,Return [1,3,3,1].
*/


class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex < 0)
            return res;
        res.push_back(1);
        if(rowIndex == 0)
            return res;
        res.push_back(1);
        if(rowIndex == 1)
            return res;
        for(int i = 2; i <= rowIndex; i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j = 1; j < i; j++)
                temp.push_back(res[j-1]+res[j]);
            temp.push_back(1);
            res = temp;
        }
        return res;
        
    }
};