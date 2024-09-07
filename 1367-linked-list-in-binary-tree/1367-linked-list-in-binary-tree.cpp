/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
 bool path(ListNode* head,TreeNode* root)
 {
    if(head == NULL)return true;
    if(root == NULL)return false;
    if(root->val == head->val)
    {
        return (path(head->next,root->left)||path(head->next,root->right));
    }
    return false;
 }
 bool trav(ListNode* head,TreeNode* root)
 {
    if(head == NULL)return true;
    if(root == NULL)return false;
    if(path(head,root))return true;

        return (trav(head,root->left)||trav(head,root->right));

 }
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root) {
        return trav(head,root);
    }
};