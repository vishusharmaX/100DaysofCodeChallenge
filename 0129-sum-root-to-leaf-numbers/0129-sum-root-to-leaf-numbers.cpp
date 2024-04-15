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
    int sum = 0;
    void solve(TreeNode*root,int currSum){
        if(root == NULL)
            return ;
        currSum = currSum*10 + root->val;
        if(root->left == NULL  && root->right == NULL)
            sum+=currSum;
        
        solve(root->left,currSum);
        solve(root->right,currSum);
    }
    int sumNumbers(TreeNode* root) {
        solve(root,0);

        return sum;
    }
};