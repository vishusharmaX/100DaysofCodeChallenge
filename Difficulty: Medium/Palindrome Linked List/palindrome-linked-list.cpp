/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool solve(vector<int>&ans){
        
        int i = 0 , j = ans.size()-1;
        
        while(i <= j){
            if(ans[i] != ans[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
        
    }
    bool isPalindrome(Node *head) {
        //  code here
        vector<int>ans;
        
        Node * curr = head;
        
        while(curr != NULL){
            ans.push_back(curr->data);
            curr = curr->next;
        }
        
        return solve(ans);
    }
};