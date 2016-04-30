/**
*Given a sorted linked list, delete all duplicates such that each element appear only once.
*For example,Given 1->1->2, return 1->2.Given 1->1->2->3->3, return 1->2->3.
*/



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* cur = head;
        
        while(cur != NULL)
        {
            ListNode* next = cur->next;
            if(next != NULL)
            {
                if(cur->val == next->val)
                {
                    cur->next = next->next;
                    continue;
                }
            }
            else
                return head;
            cur = cur->next;
        }
        return head;
        
    }
};