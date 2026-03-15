/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        map<int,map<int,vector<int>>>nodes;
        vector<vector<int>>ans;
        queue<pair<Node*,pair<int,int>>>q;
        q.push({root,{0,0}});
        
        while(!q.empty()){
            
            pair<Node*,pair<int,int>> nd = q.front();
            q.pop();
            Node * frontnode = nd.first;
            int hd = nd.second.first;
            int lvl = nd.second.second;
            
            nodes[hd][lvl].push_back(frontnode->data);
            if(frontnode->left){
                q.push({frontnode->left,{hd-1,lvl+1}});
            }
            if(frontnode->right){
                q.push({frontnode->right,{hd+1,lvl+1}});
            }
        }
        
        for(auto it : nodes){
            vector<int>res;
            for(auto i : it.second){
                for(auto k : i.second){
                    res.push_back(k);
                }
            }
            ans.push_back(res);
        }
        
        return ans;
        
        
        
    }
};