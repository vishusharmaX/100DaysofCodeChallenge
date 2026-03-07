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
  
    int solve(Node* root){
        if(root == NULL)return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        int ans = max(left,right)+1;
        return ans;
    }
    bool isBalanced(Node* root) {
        // code here
        if(root == NULL)return true;
        
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool third = abs(solve(root->left)- solve(root->right)) <=1;
        
        if(left && right && third){
            return true;
        }
        
        else{
            return false;
        }
    }
};