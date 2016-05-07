/**
*Given an array of integers, every element appears three times except for one. Find that single one.
*Note:
*Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
**/


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        int result = 0;
        for(int i = 0; i < 32; i++)
        {
            int temp = 0;
            for(int j = 0; j < len; j++)
            {
                if((1<<i)&nums[j])
                    temp++;
            }
            if(temp%3)
                result |= (1<<i);
        }
        return result;
    }
};