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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> output(k, nullptr);
        ListNode* temp = head;
        int length = 0;

        while (temp) {
            length++;
            temp = temp->next;
        }

        int cnt = length / k;
        int remaining = length % k;

        temp = head;
        int index = 0;

        while (temp && index < k) {
            output[index] = temp;
            int partSize = cnt + (remaining > 0 ? 1 : 0);
            remaining--;

            for (int i = 1; i < partSize; i++) {
                temp = temp->next;
            }

            ListNode* nextPart = temp->next;
            temp->next = nullptr;
            temp = nextPart;

            index++;
        }

        return output;
    }
};
