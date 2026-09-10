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
    ListNode* deleteMiddle(ListNode* head) {
        // ListNode* fast = head;
        // ListNode* slow = head;
        // ListNode* prev = nullptr;

        // while(fast != NULL && fast->next != NULL){
        //     prev = slow;
        //     slow = slow->next;
        //     fast = fast->next->next;

        // }
        // ListNode* mid = slow;
        // prev->next = slow->next;
        // delete(mid);
        // return head;


        if(head==NULL || head->next==NULL)
        return NULL;
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL )
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;

    }
};