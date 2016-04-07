/**
*输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。
*假设输入的数组的任意两个数字都互不相同。
**/


class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
		if(sequence.size() == 0)
            return false;
        vector<int> seq1,seq2;
        int length = sequence.size();
        int root = sequence[length-1];
        int i = 0;
        for(; i < length-1; i++)
        {
            
            if(sequence[i] > root)
                break;
            seq1.push_back(sequence[i]);
        }
        int j = i;
        for(; j < length-1; j++)
        {
           
            if(sequence[j] < root)
                return false;
             seq2.push_back(sequence[j]);
        }
        bool left = true;
        if(seq1.size()>0)
           left = VerifySquenceOfBST(seq1);
        bool right = true;
        if(seq2.size()>0)
            right = VerifySquenceOfBST(seq2);
        return (left&& right);
        
    }
};