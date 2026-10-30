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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* odd = new ListNode(head->val);
        ListNode* temp=head;
        ListNode* curr=odd;
        while (temp){
            if(temp->next==NULL||temp->next->next==NULL) break;
            curr->next = new ListNode(temp->next->next->val);
            temp=temp->next->next;
            curr=curr->next;
        } 
        temp=head->next;
        if(temp!=NULL){
            curr->next= new ListNode(temp->val);
            curr=curr->next;
        }
        while (temp){
            if(temp->next==NULL||temp->next->next==NULL) break;;
            temp=temp->next->next;
            curr->next = new ListNode(temp->val);
            curr=curr->next;
        }     
        return odd;
    }
};