/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node * insertnode(Node * head){
        Node * temp = head;
        while(temp != NULL){
            Node * nextelement = temp->next;
            Node * copyelement = new Node(temp->val);
            copyelement->next = nextelement;
            temp->next = copyelement;

            temp = nextelement;
        }
        return head;
    }
    void copyrandompointer(Node * head){
        Node * temp = head;
        while(temp != NULL){
            Node * copynode = temp->next;
            if(temp->random ){
                copynode->random = temp->random->next;
            }
            else{
                copynode->random = NULL;
            }
            temp = temp->next->next;
        }
    }

    Node * finalclone(Node * head){
        Node * temp = head;
        Node * dummynode = new Node(-1);
        Node * res = dummynode;
        while(temp != NULL){
            res->next = temp->next;
            temp->next = temp->next->next;

            res = res->next;
            temp = temp->next;
        }
        return dummynode->next;
    }

    Node* copyRandomList(Node* head) {
        head= insertnode(head);
        copyrandompointer(head);
        return finalclone(head);
    }
};