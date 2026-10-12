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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //ideia:
        // juntar duas listas é facil pq só tenho que checar dois elementos e pegar o menor
        // juntar varias é dificil pq tenho que checar TODOS os primeiros e pegar o menor
        // juntar 2 listas de cada vez (tipo o merge sort)
        if(lists.size() == 0){
            return NULL;
        }
        while(lists.size() > 1){
            vector<ListNode*> mergedLists;
            ListNode* l1;
            ListNode* l2;
            for(int i = 0; i < lists.size(); i+=2){
                l1 = lists[i];
                if(i+1 >= lists.size()){
                    l2 = NULL;
                }
                else{
                    l2 = lists[i+1];
                }
                mergedLists.push_back(merge(l1,l2));
            }
            lists = mergedLists;
        }       

        return lists[0]; 
    }
    ListNode* merge(ListNode* l1, ListNode* l2){
            ListNode ans(0);
            ListNode* p = &ans;

            while(l1 != NULL && l2 != NULL){
                if(l1->val <= l2->val){
                    p->next = l1;
                    l1 = l1->next;
                }
                else{
                    p->next = l2;
                    l2 = l2->next;
                }
                p = p->next;
            }

            if(l1 == NULL){
                p->next = l2; 
            }
            else{
                p->next = l1;
            }

            return ans.next;
    }
};