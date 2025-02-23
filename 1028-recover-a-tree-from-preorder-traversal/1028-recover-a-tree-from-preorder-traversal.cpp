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
    TreeNode* solve(string &traversal, int &i, int depth){
        int n = traversal.length();
        if(i>=n ){ // array out of bound
            return NULL;
        }
        int j = i;
        while(j<n && traversal[j] == '-'){ // calculating depth
            j++;
        }
        int dashcount = j-i;
        if(dashcount != depth){ // no node in the next level
            return NULL;
        }
        i += dashcount;
        int num = 0;
        while(i<n && isdigit(traversal[i])){  //calculating number
            num = (num*10)+traversal[i] - '0'; // converting string to integer
            i++;
        } 
        
        TreeNode* root = new TreeNode(num); 
        root->left = solve(traversal, i, depth+1 );
        root->right = solve(traversal, i, depth+1);
        return root;
    }

    TreeNode* recoverFromPreorder(string traversal) {
        int i = 0;
        int depth = 0;
        return solve(traversal,i,depth);
    }
};