/**
*在一个二维数组中，每一行都按照从左到右递增的顺序排序，
*每一列都按照从上到下递增的顺序排序。请完成一个函数，输入
*这样的一个二维数组和一个整数，判断数组中是否含有该整数
**/


class Solution {
public:
    bool Find(vector<vector<int> > array,int target) {
        int rows = array.size();
        int columns = array[0].size();
        int row = 0,column = columns-1;
        while(row<=rows-1 && column>=0)
        {
            if(array[row][column]>target)
                column--;
            else if(array[row][column]<target)
                row++;
             else
                return true;
            
        }
        return false;
    }
};