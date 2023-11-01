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
    void inorder(TreeNode* root,vector<int>& arr){
        if(root == nullptr)
            return;
        inorder(root->left,arr);
        arr.push_back(root->val);
        inorder(root->right,arr);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map <int,int> umap;
        int m = INT_MIN;
        vector<int> mode;
        vector<int> arr; 
        inorder(root,arr);
        for(int i = 0; i < arr.size();i++){
            umap[arr[i]]++;
            m = max(umap[arr[i]],m);
        }
        for(auto it : umap){
            if(it.second == m)
                mode.push_back(it.first);
        }
        return mode;
    }
};