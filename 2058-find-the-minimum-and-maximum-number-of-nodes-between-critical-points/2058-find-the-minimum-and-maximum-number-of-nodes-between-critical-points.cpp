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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>nums, result;
        while(head){
            nums.push_back(head->val);
            head=head->next;
        }

        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1])result.push_back(i);
            else if(nums[i]<nums[i-1] and nums[i]<nums[i+1])result.push_back(i);
        }

        if(result.size()<2)return {-1, -1};
        else{
        int mxdistant=result[result.size()-1]-result[0];
        int mndistant=INT_MAX;
        for(int i=1; i<result.size(); i++){
            mndistant=min(mndistant, result[i]-result[i-1]);
        }

        return {mndistant, mxdistant};
        }

    }
};