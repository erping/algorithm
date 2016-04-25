/**
*Rotate an array of n elements to the right by k steps.
*For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].
*/



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(len == 0 || k == len)
            return;
        if(k > len)
          k = k%len;
        rotate(nums,0,len-k-1);
        rotate(nums,len-k,len-1);
        rotate(nums,0,len-1);
    }
    void rotate(vector<int>&nums,int i,int j)
    {
        while(i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        
    }
};