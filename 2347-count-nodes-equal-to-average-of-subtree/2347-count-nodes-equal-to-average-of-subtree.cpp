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
    pair<int,int> solve(TreeNode* root, int &cnt){
        if(root==NULL){
            return make_pair(0,0);
        }
        pair<int,int> left = solve(root->left, cnt);
        pair<int,int> right = solve(root->right, cnt);
        
        pair<int,int>ans;
        ans.first = root->val + left.first + right.first;
        ans.second = left.second + right.second + 1;
        int num = ans.first / ans.second;
        if(num==root->val) cnt++;
        return ans;
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt=0;
        pair<int,int>p = solve(root,cnt);
        return cnt;
    }
};