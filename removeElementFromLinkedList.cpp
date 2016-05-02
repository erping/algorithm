/**
*Remove all elements from a linked list of integers that have value val.
*Example,Given: 1 --> 2 --> 6 --> 3 --> 4 --> 5 --> 6, val = 6
*Return: 1 --> 2 --> 3 --> 4 --> 5
*/



class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return NULL;
        while(head->val == val)
        {
            head = head->next;
            if(head == NULL)
                return NULL;
        }
        ListNode* cur = head;
        while(cur != NULL)
        {
            ListNode* next = cur->next;
            
            
            if(next == NULL)
                return head;
            if(next->val == val)
            {
                cur->next  = next->next;
                continue;
            }
            cur = cur->next;
        }
        return head;
    }
};