/**
*Given a binary tree, determine if it is height-balanced.
*For this problem, a height-balanced binary tree is defined as a binary tree in which the 
*depth of the two subtrees of every node never differ by more than 1
**/




class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        int left = heightOfTree(root->left);
        int right = heightOfTree(root->right);
        int balance= left -right;
        if(balance > 1 || balance < -1)
            return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
    int heightOfTree(TreeNode* root){
        if(root == NULL)
            return 0;
        int left = heightOfTree(root->left);
        int right = heightOfTree(root->right);
        if(left > right)
            return left+1;
        else
            return right+1;
    }
};


//another solution which is faster using backorder traversal
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int depth = 0;
        return isBalanced(root,&depth);
    }
    bool isBalanced(TreeNode* root, int* depth){
        if(root == NULL)
        {
            *depth = 0;
            return true;
        }
        int left,right;
        if(isBalanced(root->left,&left) && isBalanced(root->right,&right))
        {
            int diff = left - right;
            if(diff >= -1 && diff <= 1)
            {
                *depth = 1 + (left>right?left:right);
                return true;
            }
        }
        return false;
    }
};


