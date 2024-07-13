class Solution {
public:
    struct ListNode{
        int val;
        ListNode *next;
        ListNode(int a){
            val=a;
            next=nullptr;
        }
    };
    int findTheWinner(int n, int k) {
        ListNode* head = new ListNode(1);
        ListNode* temp = head;
        for(int i = 2; i <= n; i++){
            ListNode* tmp = new ListNode(i);
            temp->next = tmp;
            temp = temp->next;
        }
        temp->next = head;
        ListNode *prev = temp;
        while(head != head -> next){
            for(int i = 1; i < k; i++){
                prev = prev->next;
                head = head->next;
            }
            prev->next = head->next;
            head = prev->next;
        }
        return head->val;
    }
};