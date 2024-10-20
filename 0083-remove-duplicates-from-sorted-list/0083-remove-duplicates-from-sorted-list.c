/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;
    
    // Traverse through the list
    while (temp != NULL && temp->next != NULL) {
        // If current node value is equal to the next node value (duplicate)
        if (temp->val == temp->next->val) {
            // Remove the duplicate by skipping the next node
            temp->next = temp->next->next;
        } else {
            // Move to the next node if no duplicate
            temp = temp->next;
        }
    }
    
    return head;
}
