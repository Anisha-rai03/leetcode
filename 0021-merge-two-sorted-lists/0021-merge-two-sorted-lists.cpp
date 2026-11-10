/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* p, *q, *r;
        ListNode* dummy = new ListNode(-1);

        p = list1;
        q = list2;
        r = dummy;

        while (p != NULL && q != NULL) {

            if (p->val <= q->val) {
                r->next = p;
                r = p;
                p = p->next;
            }
            else {
                r->next = q;
                r = q;
                q = q->next;
            }
        }

        if (p) {
            r->next = p;
        }
        else {
            r->next = q;
        }

        return dummy->next;
    }
};
