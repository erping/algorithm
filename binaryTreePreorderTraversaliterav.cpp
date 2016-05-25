/**
*Given a binary tree, return the preorder traversal of its nodes' values.
*/



class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root == NULL)
            return res;
      stack<TreeNode* > temp;
      temp.push(root);
      while(!temp.empty())
      {     
          TreeNode* temp1 = temp.top();
          res.push_back(temp1->val);
          temp.pop();
          
          if(temp1->right != NULL)          //it is different from sequencial traverse , right first
            temp.push(temp1->right);
          if(temp1->left != NULL)
            temp.push(temp1->left);
          
      }
      return res;
       
        
    }
private:
    vector<int> res;
};