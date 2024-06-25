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
    unordered_map<int,int>mpp;
    void inorder(TreeNode*root,vector<int>&ans){
        if(root == NULL)
            return ;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    void getSum(vector<int>&ans){
        int n = ans.size();
        mpp[ans[n-1]] = ans[n-1];
        for(int i = n-2; i>=0; i--){
            int val = ans[i];
            mpp[val] = val + mpp[ans[i+1]];
        }
    }
    void traversal(TreeNode* &root){
        if(root== NULL)
            return;
        traversal(root->left);
        if(mpp.find(root->val) != mpp.end()){
            root->val = mpp[root->val];
        }
        traversal(root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        getSum(ans);
        traversal(root);
        return root;
    }
};