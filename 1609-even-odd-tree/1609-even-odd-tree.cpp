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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool even_level = true;
        while(!q.empty()){
            int n = q.size();

            int prev;

            if(even_level)
                prev = INT_MIN;
            else
                prev = INT_MAX;
            
            while(n--){
                TreeNode* curr = q.front();
                q.pop();

                if(even_level &&(curr->val%2 == 0 || curr->val <= prev))
                    return false;
                
                if(!even_level &&(curr->val%2 != 0 || curr->val >= prev))
                    return false;

                prev = curr->val;

                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
            }

            even_level = !even_level;
        }

        return true;
    }
};