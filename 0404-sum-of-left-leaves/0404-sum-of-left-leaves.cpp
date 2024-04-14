class Solution {
public:
    int sum = 0;
    void  solve(TreeNode* root) {
        if (root == NULL)
            return ;
        if( root->left != NULL && (root->left->left==NULL && root->left->right==NULL))
            sum+=root->left->val;
        
        solve(root->left);
        solve(root->right);
    }

    int sumOfLeftLeaves(TreeNode* root) {
            solve(root);
            return sum;
    }
};
