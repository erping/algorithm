/*请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，
第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。*/


/* 不使用reverse!!! 借助两个stack，分别为s1和s2。
   1. 首先将根节点压入栈s1。
   2. 将s1依次出栈，保存每个节点值，并依次将每个节点的左右节点压入栈s2
   3. 将s2依次出栈，保存每个节点值，并依次将每个节点的右左节点压入本s1<注：这里是先压右子
      节点再压左子节点>
*/
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<vector<int> > result;
        if (!pRoot) { return result; }
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        vector<int> temp;
        s1.push(pRoot);
        while (true) {
            while (!s1.empty()) {
                TreeNode* ptr = s1.top();
                s1.pop();
                if (!ptr) { continue; }
                s2.push(ptr->left);
                s2.push(ptr->right);
                temp.push_back(ptr->val);
            }
            if (temp.empty()) { break; }
            result.push_back(temp);
            temp.clear();
            while (!s2.empty()) {
                TreeNode* ptr = s2.top();
                s2.pop();
                if (!ptr) { continue; }
                s1.push(ptr->right);
                s1.push(ptr->left);
                temp.push_back(ptr->val);
            }
            if (temp.empty()) { break; }
            result.push_back(temp);
            temp.clear();
        }
        return result;
    }
};