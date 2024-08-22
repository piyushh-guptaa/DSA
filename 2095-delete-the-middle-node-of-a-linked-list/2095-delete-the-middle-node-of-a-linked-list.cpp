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
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode* temp = head;
        int cnt = 0;

        while (temp != nullptr) {
            temp = temp->next;
            cnt++;
        }

        int median = cnt / 2;
        temp = head;
        int index = 0;
        ListNode* prev = nullptr;

        while (index != median) {
            prev = temp;
            temp = temp->next;
            index++;
        }

        prev->next = temp->next;
        return head;
    }
};

