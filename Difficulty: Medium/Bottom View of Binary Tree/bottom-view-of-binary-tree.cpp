/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        map<int,int>nodes;
        queue<pair<Node*,pair<int,int>>>q;
        
        q.push({root,{0,0}});
        
        vector<int>ans;
        if(root== NULL)
            return ans;
        
        while(!q.empty()){
            pair<Node*,pair<int,int>>temp = q.front();
            q.pop();
            
            Node * fnode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd] = fnode->data;
            
            if(fnode->left)
                q.push({fnode->left,{hd-1,lvl+1}});
            
            if(fnode->right)
                q.push({fnode->right,{hd+1,lvl+1}});
            
        }
        
        
        for(auto it : nodes){
            ans.push_back(it.second);
        }
        
        
        return ans;
        
    }
};