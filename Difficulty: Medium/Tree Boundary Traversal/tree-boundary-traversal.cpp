/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traversalLeft(Node * root, vector<int>&ans){
        
        if((root == NULL) || (root->left == NULL  && root->right == NULL))return;
        
        ans.push_back(root->data);
        if(root->left) traversalLeft(root->left,ans);
        else traversalLeft(root->right,ans);
        
    }
    
    void traverseLeaf(Node * root, vector<int>&ans){
        
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
    
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
    }
    
    void traversalRight(Node * root, vector<int>&ans){
        
        if((root == NULL) || (root->left == NULL  && root->right == NULL))return;
        
        if(root->right) traversalRight(root->right,ans);
        else traversalRight(root->left,ans);
        
        ans.push_back(root->data);
    };
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        
        vector<int>ans;
        if(root == NULL)return ans;
        
        ans.push_back(root->data);

        
        //left traverse karo
        
        
        traversalLeft(root->left,ans);
        
        // leaf node traverse karo
        
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        
        
        //Right node traverse karo
        
        traversalRight(root->right,ans);
        
        return ans;
        
    }
};