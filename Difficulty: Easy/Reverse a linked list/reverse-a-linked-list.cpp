/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = NULL ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        Node * curr = head;
        Node * prev = NULL;
        Node * next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next  = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
};