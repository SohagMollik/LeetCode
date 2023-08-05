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
    vector<TreeNode*> BST(int start, int end){
        vector<TreeNode*> ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i=start;i<=end;++i){
            vector<TreeNode*> leftSubTree=BST(start,i-1);
            vector<TreeNode*> rightSubTree=BST(i+1,end);
            
            for(int j=0;j<leftSubTree.size();++j){
                for(int k=0;k<rightSubTree.size();++k){
                    TreeNode* root = new TreeNode(i);
                    root->left=leftSubTree[j];
                    root->right=rightSubTree[k];
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
        
    }
public:
    vector<TreeNode*> generateTrees(int n) {
        return BST(1,n);
        
    }
};