/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
    pair<bool,int> solve(Node * root){
        
        if(root == NULL){
            pair<bool,int>p = make_pair(true,0);
            return p;
        }
        if(root->left == NULL &&  root->right == NULL){
            pair<bool,int> p = make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int>left = solve(root->left);
        pair<bool,int>right = solve(root->right);
        
        bool leftans = left.first;
        bool rightans = right.first;
        
        bool third =  root->data == (left.second + right.second);
        
        pair<bool,int>ans;
        
        
        if(leftans && rightans && third){
            ans.first  = true;
            ans.second = 2*root->data;
        }
        else{
            ans.first = false;
        }
        
        return ans;
        
        
    }
  
    bool isSumTree(Node* root) {
        // Your code here
        
        return solve(root).first;
        
    }
};