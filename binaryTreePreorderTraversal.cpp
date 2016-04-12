/**
*Given a binary tree, return the preorder traversal of its nodes' values.
*For example:Given binary tree{1,#,2,3}
*return[1,2,3].
**/




class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> res,left,right;
        if(root == NULL)
            return res;
        res.push_back(root->val);
        if(root->left)
        {
           left = preorderTraversal(root->left);
            int i;
            for(i = 0; i < left.size();i++)
            {
                res.push_back(left[i]);
            }
        }
        if(root->right)
        {
          right = preorderTraversal(root->right);
            int i;
            for(i = 0; i < right.size();i++)
            {
                res.push_back(right[i]);
            }
        }
        return res;
        
    }
};