/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertCopyInBetween(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* nextElement = temp->next;
            Node* copy = new Node(temp->val);
            copy->next = nextElement;
            temp->next = copy;
            temp = nextElement;
        }
    }

    void connectRandomPointers(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            Node* copyNode = temp->next;
            if (temp->random != NULL) {
                // The copy's random points to the copy of temp's random
                copyNode->random = temp->random->next;
            } else {
                copyNode->random = NULL;
            }
            // Move to the next original node safely
            temp = temp->next->next;
        }
    }

    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL; // Handle edge case

        // Step 1: Interleave cloned nodes
        insertCopyInBetween(head);
        
        // Step 2: Assign random pointers
        connectRandomPointers(head);
        
        // Step 3: Separate the mixed list into original and cloned lists
        Node* temp = head;
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;
        
        while (temp != NULL) {
            res->next = temp->next;
            res = res->next;
            
            // Restore the original list links
            temp->next = temp->next->next;
            temp = temp->next; 
        }
        
        Node* clonedHead = dummyNode->next;
        delete dummyNode; // Free dummy node memory to prevent leaks
        return clonedHead;
    }
};
