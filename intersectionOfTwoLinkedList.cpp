/**
*Write a program to find the node at which the intersection of two singly linked lists begins.
*For example, the following two linked lists:
*A:          a1 → a2
*                   ↘
*                     c1 → c2 → c3
*                   ↗            
*B:     b1 → b2 → b3
*begin to intersect at node c1.
*/



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        int countA = 0, countB = 0;
        ListNode* cur = headA;
        while(cur != NULL)
        {
            countA++;
            cur = cur->next;
        }
        cur = headB;
        while(cur != NULL)
        {
            countB++;
            cur = cur->next;
        }
        int a = countA - countB;
        if(a >= 0)
        {
            while(a)
            {
                headA = headA->next;
                a--;
            }
        }
        else
        {
            a = -a;
            while(a)
            {
                headB = headB->next;
                a--;
            }
        }
        while(headA != headB)
        {
           headA = headA->next;
           headB = headB->next;
        }
        if(headA == NULL)
            return NULL;
        else
            return headA;
        
    }
};
