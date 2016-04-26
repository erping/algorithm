/**
*Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*You may assume that each input would have exactly one solution.
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.find(target-nums[i]) != m.end())
            return {m[target-nums[i]], i};
            m[nums[i]] = i;
        }
    }
};