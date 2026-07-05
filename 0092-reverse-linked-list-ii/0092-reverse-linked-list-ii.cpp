class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == NULL || left == right)
            return head;

        // Step 1: Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Step 2: Reach the node before 'left'
        ListNode* beforeLeft = dummy;

        for (int i = 1; i < left; i++)
        {
            beforeLeft = beforeLeft->next;
        }

        // Step 3: Initialize pointers for reversal
        ListNode* prev = NULL;
        ListNode* curr = beforeLeft->next;

        // Save the original left node
        ListNode* leftNode = curr;

        // Step 4: Reverse exactly (right-left+1) nodes
        for (int i = 0; i < right - left + 1; i++)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Step 5: Reconnect
        beforeLeft->next = prev;
        leftNode->next = curr;

        // Step 6: Return new head
        return dummy->next;
    }
};