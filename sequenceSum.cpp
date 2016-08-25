/*
小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了正确答案是100。
但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:18,19,20,21,22。现在把问题交给你,你能不能
也很快的找出所有和为S的连续正数序列? Good Luck! 
输出描述:
输出所有和为S的连续正数序列。序列内按照从小至大的顺序，序列间按照开始数字从小到大的顺序
*/





class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > res;
        if(sum < 3)
            return res;
        int begin = 1;
        int end = 2;
        int mid = (sum +1)>>1;
        int cur_sum = begin + end;
        while(begin <= mid && end < sum)
        {
            while(cur_sum > sum)
            {
                cur_sum -= begin;
                begin++;
            }
            if(cur_sum == sum)
                insertRes(begin,end,res);
            end++;
            cur_sum += end;

        }
        return res;
    }
    void insertRes(int begin,int end, vector<vector<int> >& res)
    {
        vector<int> temp;
        for(int i = begin; i <= end; i++)
            temp.push_back(i);
        res.push_back(temp);
    }
};