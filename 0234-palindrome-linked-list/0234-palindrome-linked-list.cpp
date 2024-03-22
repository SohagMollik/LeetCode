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
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL or head->next==NULL) return true;
        
        
        
        ListNode* curr=head;
        ListNode* previous=NULL;
        
        while(curr!=NULL){
            ListNode* temp= new ListNode(curr->val);
            temp->next=previous;
            previous=temp;
            curr=curr->next;
        }
        
        while(previous && head){
            if(previous->val != head->val){
                return false;
            }
            
                head=head->next;
                previous=previous->next;      
        }
        
       return true;
        
    }
};