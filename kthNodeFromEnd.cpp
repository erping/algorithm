/**
*print the kth node from the end and the last is 1
**/

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead == NULL || k == 0)      //boundary conditon
            return NULL;
    	ListNode* pHead = pListHead;
        ListNode* pBehind = pListHead;
        unsigned int i;
        for(i = 0; i < k-1; i++)
        {
            if(pHead->next != NULL)     //if the list has less than k nodes
                pHead = pHead->next;
            else 
                return NULL;
        }
        while(pHead->next!=NULL)
        {
            pHead = pHead->next;
            pBehind = pBehind->next;
        }
        return pBehind;
    }
};