/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA;
        ListNode *pB = headB;
        unordered_set<ListNode*> s;

        while(pA != NULL){
            s.insert(pA);
            pA = pA->next;
        }

        while(pB != NULL){
            if(s.count(pB)){
                return pB;
            }
            pB = pB->next;
        }

        return NULL;
    }
};