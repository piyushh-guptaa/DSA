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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
      int countNodes=0;
      while(temp!=NULL){
          countNodes++;
          temp=temp->next;
      }
      if(countNodes==n){
          ListNode *node=head;
          head=head->next;
          delete node;
          return head;
      }
         
      int difference = countNodes - n;
      int counter=1;
      temp=head;
      while(counter!=difference){
          counter++;
          temp=temp->next;
      }
    
      ListNode *node=temp->next;
      temp->next=node->next;
      delete node;
        
      return head;   
    }
};