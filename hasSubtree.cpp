
/*题目描述

输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）

*/


class Solution {
public:
    bool IsSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
       
        if (pRoot2 == NULL) return true;
        if (pRoot1 == NULL) return false;
        if (pRoot2->val == pRoot1->val)
        {
            return IsSubtree(pRoot1->left, pRoot2->left)
                && IsSubtree(pRoot1->right, pRoot2->right);
        } 
        else 
            return false;
        
    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
		if(pRoot1 == NULL || pRoot2 == NULL)
            return false;
        return IsSubtree(pRoot1,pRoot2) || HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right,pRoot2);
    }
    
};