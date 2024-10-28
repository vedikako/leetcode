#include <stdbool.h>
#include <stdlib.h>

// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

// Function to check if the linked list is a palindrome
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return true; // An empty list or a single element list is a palindrome
    }

    // Step 1: Use two pointers to find the middle of the list
    struct ListNode* slowPtr = head;
    struct ListNode* fastPtr = head->next;

    // Move fastPtr by two and slowPtr by one step
    // When fastPtr reaches the end, slowPtr will be at the middle
    while (fastPtr && fastPtr->next) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    // Step 2: Reverse the second half of the list
    struct ListNode* prevNode = NULL;
    struct ListNode* currentNode = slowPtr->next;

    while (currentNode) {
        struct ListNode* nextTemp = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextTemp;
    }

    // Step 3: Compare the reversed second half with the first half
    struct ListNode* firstHalfNode = head; // Start from the head for comparison
    struct ListNode* secondHalfNode = prevNode; // Start from the head of the reversed second half

    while (secondHalfNode) {
        // If the values are different, then it's not a palindrome
        if (secondHalfNode->val != firstHalfNode->val) {
            return false;
        }
        // Move to the next nodes in both halves
        secondHalfNode = secondHalfNode->next;
        firstHalfNode = firstHalfNode->next;
    }

    // All values matched, so it is a palindrome
    return true;
}
