/**
*Given an array and a value, remove all instances of that value in place and return the new length.
*Do not allocate extra space for another array, you must do this in place with constant memory.
*The order of elements can be changed. It doesn't matter what you leave beyond the new length.
**/



class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int id = 0;
       for(int i = 0 ; i < nums.size(); i++)
       {
           if(nums[i] != val)
              nums[id++] = nums[i];
       }
       return id;
    }
};