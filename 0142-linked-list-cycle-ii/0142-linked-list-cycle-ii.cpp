/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }
        
        std::unordered_map<ListNode*, bool> map;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            if (map.find(temp) != map.end()) {
                return temp;
            }
            map[temp] = true;
            temp = temp->next;
        }
        
        return nullptr;
    }
};