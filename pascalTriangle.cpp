/**
*Given numRows, generate the first numRows of Pascal's triangle.
*For example, given numRows = 5,Return
*[
*     [1],
*    [1,1],
*   [1,2,1],
*  [1,3,3,1],
* [1,4,6,4,1]
*]
*/



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > res;
        if(numRows == 0)
            return res;
        vector<int> pasc;
        pasc.push_back(1);
        res.push_back(pasc);
        if(numRows == 1)
            return res;
        pasc.push_back(1);
        res.push_back(pasc);
        if(numRows == 2)
            return res;
        for(int i = 3; i <= numRows; i++)
        {
            vector<int> temp ;
            temp.push_back(1);
            for(int j = 1; j < i-1; j++)
                temp.push_back(pasc[j-1]+pasc[j]);
            temp.push_back(1);
            res.push_back(temp);
            pasc = temp;
        }
        return res;
    }
};