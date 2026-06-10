class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* aage = curr->next;
            curr->next = prev;
            prev = curr;
            curr = aage;
        }

        return prev;
    }
};