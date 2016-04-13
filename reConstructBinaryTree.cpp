/**
*输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
*假设输入的前序遍历和中序遍历的结果中都不含重复的数字
**/




class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> in) {
        if(pre.size() == 0 || in.size() == 0)
            return NULL;
        vector<int> pre_left,pre_right,in_left,in_right;
        TreeNode* root = new TreeNode(pre[0]);
       
        int i,j;
        for(i = 0; i < in.size(); i++)
        {
            if(in[i] == pre[0])
                break;
            
        }
        
        for(j = 0; j < i; j++)
        {
            in_left.push_back(in[j]);
            pre_left.push_back(pre[j+1]);
        }
        for(j = i + 1; j < in.size(); j++)
        {
            in_right.push_back(in[j]);
            pre_right.push_back(pre[j]);
        }
        root->left = reConstructBinaryTree(pre_left,in_left);
        root->right = reConstructBinaryTree(pre_right,in_right);
        return root;

    }
};