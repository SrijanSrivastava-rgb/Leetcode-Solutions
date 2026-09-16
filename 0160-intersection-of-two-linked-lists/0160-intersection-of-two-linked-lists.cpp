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
         if(headA == nullptr || headB == nullptr){
            return nullptr;
        }
        
        ListNode *ptrA = headA;
        ListNode *ptrB = headB;

         while(ptrA != ptrB){
        //     if(ptrA != nullptr){
        //         ptrA = ptrA -> next;
        //     }
        //     else ptrA = headB;

        //     if(ptrB != nullptr){
        //         ptrB = ptrB -> next;
        //     }
        //     else ptrB = headA;

            ptrA = ptrA->next;
            ptrB = ptrB->next;

            if(ptrA == ptrB) return ptrA;

            if(ptrA == NULL) ptrA = headA;
            if(ptrB == NULL) ptrB = headB;
         }


        return ptrA;
    }
};