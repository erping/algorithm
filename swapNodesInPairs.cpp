/**
*Given a linked list, swap every two adjacent nodes and return its head.
*For example,Given 1->2->3->4, you should return the list as 2->1->4->3.
*Your algorithm should use only constant space. You may not modify the values 
*in the list, only nodes itself can be changed.
*/


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* cur = head;
        while(cur != NULL &&cur->next != NULL )
        {
            int num = cur->val;
            ListNode* next = cur->next;
            cur->val = next->val;
            next->val = num;
            cur = next->next;
        }
        return head;
    }
};