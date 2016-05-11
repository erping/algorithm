/**
*Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique 
*triplets in the array which gives the sum of zero.
*Note:
*Elements in a triplet (a,b,c) must be in non-descending order. (ie, a ≤ b ≤ c)
*The solution set must not contain duplicate triplets.
*    For example, given array S = {-1 0 1 2 -1 -4},

*    A solution set is:
*    (-1, 0, 1)
*    (-1, -1, 2)
*/



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int sum = -nums[i];
            int front = i + 1;
            int back = nums.size() - 1;
            while(front < back)
            {
                if(nums[front]+nums[back] > sum)
                    back--;
                else if(nums[front]+nums[back] < sum)
                    front++;
                else
                {
                    vector<int> tri;
                    tri.push_back(nums[i]);
                    tri.push_back(nums[front]);
                    tri.push_back(nums[back]);
                    res.push_back(tri);
                
                while(front < back && nums[front] == tri[1])
                    front++;
                while(front < back && nums[back] == tri[2])
                    back--;
                }
            }
            while(i+1 < nums.size() && nums[i] == nums[i+1])
                i++;
        }
        return res;
    }
};