/**
*Given an array with n objects colored red, white or blue, sort them so that objects of the same color 
*are adjacent, with the colors in the order red, white and blue
*Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        int j = len - 1;
      
        while(i < j)
        {
            while(i < j && nums[i] != 2)
                i++;
            while(i < j && nums[j] == 2)
                j--;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
        j = len -1;
        i = 0;
        while(nums[j] == 2)
            j--;
        while(i < j)
        {
            while(i < j && nums[i] == 0)
                i++;
            while(i < j && nums[j] != 0)
                j--;
            int temp = nums[i];
             nums[i] = nums[j];
            nums[j] = temp;
        }
        
    }
};