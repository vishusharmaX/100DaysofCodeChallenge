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
        queue<pair<Node*,pair<int,int>>>q;
        
        vector<vector<int>>ans;
        
        if(root == NULL){
            return ans;
        }
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp = q.front();
            q.pop();
            
            Node * frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left)
                q.push({frontNode->left,{hd-1,lvl+1}});
                
            if(frontNode->right)
                q.push({frontNode->right,{hd+1,lvl+1}});
        }
        
        
        for(auto it : nodes){
            vector<int>temp;
            for(auto i : it.second){
                for(auto k : i.second){
                    temp.push_back(k);
                }
            }
            
            ans.push_back(temp);
        }
        
        
        return ans;
    }
};