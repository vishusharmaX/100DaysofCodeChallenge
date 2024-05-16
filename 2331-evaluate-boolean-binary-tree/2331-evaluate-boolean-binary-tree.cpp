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
    bool solve(TreeNode * root){

        if(root->left == NULL && root->right == NULL){
            return root->val;
        }
        if(root->val == 3){
            if(root->left->val  == root->right->val && root->left->val != 0 && root->right->val != 0 )
                return true;
            
            else
                return false;
        }
        else if(root->val == 2){
            if(root->left->val == 0 && root->right->val == 0 )
                return false;
            
            else
                return true;
        }
        solve(root->left);
        solve(root->right);

        return true;
    }

    bool evaluateTree(TreeNode* root) {
        
        return solve(root);
        
    }
};