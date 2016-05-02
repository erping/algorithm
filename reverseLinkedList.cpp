/**
*Reverse a singly linked list.
*/



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode* cur = head->next;
        ListNode* pre = head;
        pre->next = NULL;
        while(cur!= NULL)
        {
            ListNode* next = cur->next; //pay attention to the order,this line must before next line
            cur->next  = pre;
           
            pre = cur;
            cur = next;
        }
        return pre;
        
    }
};