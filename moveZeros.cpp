/**
*Given an array nums, write a function to move all 0's to the end of it while maintaining 
*the relative order of the non-zero elements.For example, given nums = [0, 1, 0, 3, 12], 
*after calling your function, nums should be [1, 3, 12, 0, 0].
**/





class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int numOfzero = 0;
        int i;
        for(i=length-1;i>=0;i--)
        {
            if(nums[i] == 0)
            {
                int j;
                for(j=i;j<length-numOfzero-1;j++)
                {
                    nums[j]=nums[j+1];
                }
                nums[j]=0;
                numOfzero++;
            }
        }
    }
};