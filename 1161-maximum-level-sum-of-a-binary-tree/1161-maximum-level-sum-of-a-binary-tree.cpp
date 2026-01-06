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
    vector<vector<int>> ans;
    void solve(TreeNode*root){
        if(!root) 
            return;

        queue<TreeNode*> q;
        q.push(root);
        vector<int>level;
        while(!q.empty()){
           int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* root = q.front();
                q.pop();
                level.push_back(root->val);
                if (root->left)
                    q.push(root->left);
                if (root->right)
                    q.push(root->right);
            }
            ans.push_back(level);
        }
    }
    int maxLevelSum(TreeNode* root) {
        solve(root);
        int level = 0;
        int maxsum = INT_MIN;
        int l = 0;
        for(auto it : ans){
            int currsum = 0;
            for(auto i : it){
                currsum += i;
            }
            l++;
            if(currsum > maxsum){
                maxsum = max(maxsum,currsum);
                level = l; 
            }
        }


        return level;
    }
};