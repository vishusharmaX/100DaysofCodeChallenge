/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>ans;
        
        map<int,int>nodes;
        
        queue<pair<Node*,pair<int,int>>>q;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            
            pair<Node*,pair<int,int>>temp = q.front();
            q.pop();
            
            Node * frontnode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.first;
            
            if(nodes.find(hd) == nodes.end()){
                nodes[hd] = frontnode->data;
            }
            
            if(frontnode->left)
                q.push({frontnode->left,{hd-1,lvl+1}});
                
            if(frontnode->right)
                q.push({frontnode->right,{hd+1,lvl+1}});
            
        }
        
        for(auto it : nodes){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};