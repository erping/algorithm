/**
*You are given two linked lists representing two non-negative numbers. The digits are stored inreverse 
*order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
*Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
*Output: 7 -> 0 -> 8
*/


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)
            return l2;
        if(l2 == NULL)
            return l1;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        int jin = 0;
        ListNode *pNode = new ListNode(0);
        ListNode *p = pNode;
        while(cur1 != NULL && cur2 != NULL)
        {
            int sum = cur1->val + cur2->val + jin;
            int nval = sum%10;
             jin = sum/10;
            p->next = new ListNode(nval);
            p = p->next;
            cur1= cur1->next;
            cur2 = cur2->next;
            
            
        }
        while(cur1 != NULL)
        {
            int sum = cur1->val + jin;
            int nval = sum%10;
            jin = sum/10;
            p->next = new ListNode(nval);
            p = p->next;
            cur1 = cur1->next;
        }
        while(cur2 != NULL)
        {
            int sum = cur2->val + jin;
            int nval = sum%10;
            jin = sum/10;
            p->next = new ListNode(nval);
            p = p->next;
            cur2 = cur2->next;
        }
        if(jin > 0)
        {
            p->next = new ListNode(jin);
        }
        return pNode->next;
    }
};