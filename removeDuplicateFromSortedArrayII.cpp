/**
*Follow up for "Remove Duplicates":
*What if duplicates are allowed at most twice?
*For example,
*Given sorted array nums = [1,1,1,2,2,3],
*Your function should return length = 5, with the first five elements of nums 
*being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        int j = 0;
        int count = 0;
        for(int i = 0; i < len; i++)
        {
            if(i == 0)
            {
                nums[j++] = nums[i];
                continue;
            }
            if(nums[i] == nums[j-1])
            {
                if(count < 1)
                {
                    nums[j] = nums[i];
                    count++;
                    j++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                nums[j] = nums[i];
                count = 0;
                j++;
            }
        }
        return j;
        
    }
};


int removeDuplicates(vector<int>& nums) {
    int i = 0;
    for (int n : nums)
        if (i < 2 || n > nums[i-2])
            nums[i++] = n;
    return i;
}