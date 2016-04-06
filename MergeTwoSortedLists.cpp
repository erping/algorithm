/**
*Merge two sorted list
**/

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1 == NULL)
            return pHead2;
        if(pHead2 == NULL)
            return pHead1;
        ListNode* nHead = NULL;
        if(pHead1->val < pHead2->val)
        {
            nHead = pHead1;
            nHead->next = Merge(pHead2, pHead1->next);
        }
        else
        {
            nHead = pHead2;
            nHead->next = Merge(pHead1,pHead2->next);
        }
        return nHead;
    }
};