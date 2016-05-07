/**
*Given a set of distinct integers, nums, return all possible subsets.
*Note:Elements in a subset must be in non-descending order.
*The solution set must not contain duplicate subsets.
*For example,
*If nums = [1,2,3], a solution is:
*[
*  [3],
*  [1],
*  [2],
*  [1,2,3],
*  [1,3],
*  [2,3],
*  [1,2],
*  []
*]
*/


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int nums_len = nums.size();
        int subsets_len = pow(2,nums_len);
        sort(nums.begin(),nums.end());
        vector<vector<int> > res(subsets_len,vector<int>());
        for(int i = 0; i < subsets_len; i++)
        {
            for(int j = 0; j < nums_len; j++)
            {
                if(i >> j &1)
                    res[i].push_back(nums[j]);
            }
        }
        return res;
    }
};