/**
*Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two 
*endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most 
*water.
*/



class Solution {
public:
    int maxArea(vector<int>& height) {
      int len = height.size();
      int i = 0;
      int j = len - 1;
      int maxwater = 0;
      while(i < j)
      {
          int h = min(height[j],height[i]);
          maxwater = max(maxwater,h*(j-i));
          while(i < j && height[i] <= h)
            i++;
          while(i < j && height[j] <= h)
            j--;
      }
      return maxwater;
      
    }
};