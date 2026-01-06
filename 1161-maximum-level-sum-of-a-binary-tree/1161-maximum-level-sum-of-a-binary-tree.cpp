/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int x=root->val;
        int level=1, mxSum=x, result=1;

        while(!q.empty()){
            int sum=0;
            for(int i=0; i<q.size();i++){
                TreeNode* curr=q.front();
                int y=curr->val;
                q.pop();
                sum+=y;
                if(curr->left!=NULL)q.push(curr->left);
                if(curr->right!=NULL)q.push(curr->right);
            }

            if(sum>mxSum){
                mxSum=sum;
                result=level;
            }

            level++;

        }

        return result;

    }
};