// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
     int countnode(Node* root) {
        if (root == NULL) return 0;
        return 1 + countnode(root->left) + countnode(root->right);
    }
    
    bool iscbt(Node * root, int index, int totalnodes){
        
        if(root == NULL)return true;
        
        if(index >= totalnodes){
            return false;
        }
        else{
            
            bool left = iscbt(root->left, 2 * index +1 ,totalnodes);
            bool right = iscbt(root->right , 2*index +2 , totalnodes);
            
            return (left && right);
            
        }
        
    }
    
    bool ismaxheap(Node* root) {
        if (root->left == NULL && root->right == NULL) return true;
    
        if (root->right == NULL)
            return (root->data >= root->left->data) && ismaxheap(root->left);
    
        return (root->data >= root->left->data &&
                root->data >= root->right->data &&
                ismaxheap(root->left) &&
                ismaxheap(root->right));
    }

  
    bool isHeap(Node* tree) {
        
        int totalnodes = countnode(tree);
        int index   = 0;
        if(iscbt(tree,index,totalnodes) && ismaxheap(tree)){
            return true;
        }
        else{
            return false;
        }
        
    }
};