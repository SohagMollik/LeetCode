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
    void reorderList(ListNode* head) {
        
        if(head==NULL or (!head->next) or (!head->next->next)) return;
        
        int size=0;
        stack<ListNode*>st;
        ListNode* ptr=head;
        while(ptr!=NULL){
            st.push(ptr);
            ++size;
            ptr=ptr->next;
        }
        
        ListNode* ptrr=head;
        
        for(int i=0; i<size/2; i++){
            
            ListNode* element=st.top();
            st.pop();
            element->next=ptrr->next;
            ptrr->next=element;
            ptrr=ptrr->next->next;
        }
        
        ptrr->next=NULL;
    }
};