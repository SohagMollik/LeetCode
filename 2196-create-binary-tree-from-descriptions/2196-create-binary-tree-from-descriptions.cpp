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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        unordered_map<int, TreeNode*>getNode;
        unordered_map<int, bool>isChild;
        
        for(auto &it: descriptions){
            
            if(getNode.count(it[0])==0){
                TreeNode* parent = new TreeNode(it[0]);
                getNode[it[0]] = parent;
                
            }
            
             if(getNode.count(it[1])==0){
                TreeNode* child = new TreeNode(it[1]);
                getNode[it[1]] = child;
                
            }
            
            if(it[2]==1)getNode[it[0]]->left = getNode[it[1]];
            else getNode[it[0]]->right = getNode[it[1]];
            isChild[it[1]]=true;
        }
        
        TreeNode* root = NULL;
        
        for(auto &it: descriptions){
            if(isChild[it[0]]!=true){
                root = getNode[it[0]];
                break;
            }
        }
        
        return root;
    }
};