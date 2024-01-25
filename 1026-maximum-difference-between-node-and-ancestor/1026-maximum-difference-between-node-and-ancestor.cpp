class Solution {
public:
    int ans = 0;
    void solve(TreeNode* root,int maxi,int mini){
        if(!root) return;
         maxi = max(maxi,root->val);
         mini = min(mini,root->val);
         ans = max(ans,abs(maxi-mini));
         solve(root->left,maxi,mini);
         solve(root->right,maxi,mini);
    }

    int maxAncestorDiff(TreeNode* root) {
        solve(root,root->val,root->val);
        return ans;
    }
};