/*Given two arrays, write a function to compute their intersection.
*Example:
*Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].
*Note:
*Each element in the result should appear as many times as it shows in both arrays.
*The result can be in any order.
*Follow up:
*What if the given array is already sorted? How would you optimize your algorithm?
*What if nums1's size is small compared to num2's size? Which algorithm is better?
*What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?
*/



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int len1 = nums1.size();
        int len2 = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0, j = 0;
        while(i < len1 && j < len2)
        {
            if(nums1[i] < nums2[j])
                i++;
            else if(nums1[i] > nums2[j])
                j++;
            else
            {
                res.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return res;
    }
};