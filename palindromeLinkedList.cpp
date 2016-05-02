/**
*Given a singly linked list, determine if it is a palindrome.
*/


class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        stack<int> s;
        queue<int> q;
        ListNode* cur = head;
        while(cur != NULL)
        {
            s.push(cur->val);
            q.push(cur->val);
            cur = cur->next;
        }
        while(!s.empty())
        {
            if(s.top() != q.front())
                return false;
            s.pop();
            q.pop();
        }
        return true;
    }
};




bool isPalindrome(struct ListNode* head)
{
    if(!head || !head->next) return true;
    struct ListNode *slow=head, *fast=head->next->next;
    while(fast && fast->next) //split into two halves while the right part might longer by 1 if the length of the link is odd;
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    fast = slow->next;
    slow->next = NULL;
    struct ListNode *cur, *pre, *next; //reverse the left linked and slow will become the head;
    cur = head->next;
    pre = head;
    pre->next = NULL;
    while(cur)
    {
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    if(fast->val != slow->val) fast = fast->next; //if the first node is unequal, move fast forward to the next;
    while(fast)
    {
        if(fast->val != slow->val)
            return false;
        fast = fast->next;
        slow = slow->next;
    }
    if(!fast || !slow) return false; //not all nodes have been compared - not symmetric;
    return true;
}