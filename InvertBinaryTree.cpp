/**
*Invert a binary tree
**/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
            return NULL;
        TreeNode* pNode = root;
        TreeNode* temp = pNode->left;
        pNode->left = pNode->right;
        pNode->right = temp;
        invertTree(pNode->left);
        invertTree(pNode->right);
        return root;
    }
};