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
    ListNode* removeElements(ListNode* head, int val) {

        while(head != nullptr && head->val == val) {
            head = head->next;
        }

        if(head == nullptr) return nullptr;

        ListNode* back = head;
        ListNode* front = head->next;

        while(front != nullptr) {

            if(front->val == val) {
                back->next = front->next;
                front = back->next;
            }
            else {
                back = front;
                front = front->next;
            }
        }

        return head;
    }
};