/**
*Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
*Note: Do not modify the linked list.
*/



class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!= NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                ListNode* temp = head;
                while(temp != slow)
                {
                    temp = temp->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};