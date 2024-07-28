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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head;

        ListNode* temp = head;
        int length = 1;
        while (temp->next) {
            length++;
            temp = temp->next;
        }

        temp->next = head;
        k = k % length;
        int stepsToNewHead = length - k;

        temp = head;
        for (int i = 1; i < stepsToNewHead; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};