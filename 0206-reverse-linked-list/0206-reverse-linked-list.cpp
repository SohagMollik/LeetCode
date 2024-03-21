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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL) return NULL;
        
        ListNode* currentNode=head;
        ListNode* previous=NULL; 
        ListNode* next=NULL;
        
        while(currentNode != NULL){
            next=currentNode->next;
            currentNode->next=previous;
            previous=currentNode;
            currentNode=next;
            
        }
        head=previous;
        
        return head;
    }
};