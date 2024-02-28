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
    vector<int>a;
    vector<int> solve(TreeNode*root, int level){
        if(root == NULL)
            return a;
        
        if(level == a.size()){
            a.push_back(root->val);
        }
        solve(root->left,level+1);
        solve(root->right,level+1);

        return a;

    }
    int findBottomLeftValue(TreeNode* root) {
        solve(root,0);
        int n = a.size();
        return a[n-1];        
    }
};