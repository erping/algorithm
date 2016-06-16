/*
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.

Example:
Given nums = [-2, 0, 3, -5, 2, -1]

sumRange(0, 2) -> 1
sumRange(2, 5) -> -1
sumRange(0, 5) -> -3
*/



class NumArray {
public:
    NumArray(vector<int> &nums) {
        num.push_back(0);
        for(int n:nums)
        {
            num.push_back(num.back()+n);
        }
    }

    int sumRange(int i, int j) {
        
        return num[j+1]-num[i];
    }
private:
    vector<int> num;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);