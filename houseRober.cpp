/**
*You are a professional robber planning to rob houses along a street. Each house has a certain amount of money 
*stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system
*connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
*
*Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount 
*of money you can rob tonight without alerting the police.
**/



class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int> dp;
        dp.push_back(nums[0]);
        dp.push_back(max(nums[0],nums[1]));
        for(int i = 2; i < nums.size(); i++)
        {
            int rob = max((nums[i]+dp[i-2]),dp[i-1]);
            dp.push_back(rob);
        }
        return dp[nums.size()-1];
        
    }
};