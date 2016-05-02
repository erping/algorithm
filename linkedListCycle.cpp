/**
*Given a linked list, determine if it has a cycle in it.
*/



class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while(slow != NULL && fast != NULL)
        {
            slow = slow->next;
            if(fast->next == NULL)
                return false;
            else
                fast = fast->next->next;
            if(fast == NULL)
                return false;
            if(fast->next == slow->next)
                return true;
        }
        return false;
        
    }
};