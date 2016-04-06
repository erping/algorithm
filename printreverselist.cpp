/**
* print the list form the end to begin
*/
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
        vector<int> res;
        stack<ListNode*> nodes;
        ListNode* node = head;
        while(node!=NULL)
        {
            nodes.push(node);
            node = node->next;
        }
        while(!nodes.empty())
        {
            res.push_back(nodes.top()->val);
            nodes.pop();
        }
        return res;
    }
};