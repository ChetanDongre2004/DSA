/*
Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
*/

class Solution
{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode * lAns  = head;
        ListNode * lTemp = lAns;

        while (head != nullptr)
        {
            if (lTemp->val != head->val)
            {
                lTemp->next = head;
                lTemp       = lTemp->next;
            }
            head = head->next;
        }
        if (lTemp != nullptr) lTemp->next = nullptr;

        return lAns;
    }
};