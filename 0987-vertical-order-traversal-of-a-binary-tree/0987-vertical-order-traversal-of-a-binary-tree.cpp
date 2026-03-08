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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,vector<int>>>nodes;
        queue<pair<TreeNode *,pair<int,int>>>q;

        q.push({root,{0,0}});

        vector<vector<int>>ans;
        if(root == NULL){
            return ans;
        }

        while(!q.empty()){
            pair<TreeNode*,pair<int,int>>temp = q.front();
            q.pop();

            TreeNode* frontnode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;

            nodes[hd][lvl].push_back(frontnode->val);

            if(frontnode->left)
                q.push({frontnode->left,{hd-1,lvl+1}});
            
            if(frontnode->right)
                q.push({frontnode->right,{hd+1,lvl+1}});
        }


        for(auto it : nodes){
            vector<int> temp;
            for(auto i : it.second){
                vector<int> vec = i.second;
                sort(vec.begin(), vec.end());
                for(auto k : vec){
                    temp.push_back(k);
                }
            }
            ans.push_back(temp);
        }
        

        return ans;

    }
};