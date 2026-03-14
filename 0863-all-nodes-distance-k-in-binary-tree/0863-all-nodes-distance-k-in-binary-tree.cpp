/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void makeparent(TreeNode * root, map<TreeNode*,TreeNode*> &mpp){

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode * nd = q.front();
            q.pop();

            if(nd->left){
                mpp[nd->left] = nd;
                q.push(nd->left);
            }
            if(nd->right){
                mpp[nd->right] = nd;
                q.push(nd->right);
            }
        }


    };

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*>mpp;
        makeparent(root,mpp);
        map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target] = true;
        int cnt = 0;
        while(!q.empty()){
            int size = q.size();
            if(cnt++ == k)break;
            for(int i = 0; i < size; i++){
                TreeNode * node = q.front();
                q.pop();
                
                if(node->left && !visited[node->left]){
                    q.push(node->left);
                    visited[node->left] = true;
                }

                if(node->right && !visited[node->right]){
                    q.push(node->right);
                    visited[node->right] = true;
                }

                if(mpp[node] && !visited[mpp[node]]){
                    q.push(mpp[node]);
                    visited[mpp[node]] = true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode * nd = q.front();
            q.pop();
            ans.push_back(nd->val);
        }


        return ans;

    }
};