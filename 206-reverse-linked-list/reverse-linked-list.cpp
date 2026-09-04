class Solution {
public:

    void reverse(ListNode*& head, ListNode* current, ListNode* previous) {

        // Base case
        if (current == nullptr) {
            head = previous;
            return;
        }

        ListNode* forward = current->next;

        current->next = previous;

        reverse(head, forward, current);
    }

    ListNode* reverseList(ListNode* head) {

        reverse(head, head, nullptr);

        return head;
    }
};