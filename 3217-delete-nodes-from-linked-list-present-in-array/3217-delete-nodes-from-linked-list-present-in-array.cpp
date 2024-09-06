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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, bool> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]] = true;
        }
        ListNode* newHead = head;
        while (newHead != nullptr && map.count(newHead->val)) {
            newHead = newHead->next;
        }
        if (newHead == nullptr) {
            return nullptr;
        }
        ListNode* prev = newHead;
        ListNode* temp = newHead->next;
        while (temp != nullptr) {
            if (map.count(temp->val)) {
                prev->next = temp->next;
            } else {
                prev = temp;
            }
            temp = temp->next;
        }
        return newHead;
    }
};
