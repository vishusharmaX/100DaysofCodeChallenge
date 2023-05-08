#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //destructor
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }
    return len;
}
void insertAtHead(Node * &tail,Node * &head, int d){
    //empty list
    if(head == NULL){
        Node * temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
     Node *temp = new Node(d);
     temp->next = head;
     head->prev= temp;
     head = temp;
    }
}
void insertAtTail(Node * &tail,Node * &head, int d){

    if(tail == NULL){
       Node * temp = new Node(d);
        tail = temp;
        head = temp;
    }
     Node *temp = new Node(d);
     tail->next = temp;
     temp->prev= tail;
     tail = temp;
}

void insertPosition( Node *&tail,Node *&head,int position , int d){
    //insert at the start 
    if(position ==1){
        insertAtHead(tail,head,d);
        return;
    }
    //insert at the middle
    Node *temp = head;
    int cnt =1 ;
    while (cnt<position-1)
    {
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail ,head, d);
        return;
    }

    //creatiing a node for d

    Node *nodetoInsert= new Node(d);
    nodetoInsert->next =temp->next;
    temp->next->prev = nodetoInsert;
    temp->next =nodetoInsert;
    nodetoInsert->prev = temp;
}
void deleteNode(int position, Node* &tail,Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    } 
   else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

      if(curr->next==NULL){
            prev->next = curr->next;
            tail=prev;
        }
        else{
             prev->next = curr->next;
        }
       
        curr->next = NULL;
        delete curr;

    }
};

void reverseList(Node* head) {
    Node* current = head;
    Node* temp = nullptr;
    
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    
    if (temp != nullptr) {
        head = temp->prev;
    }
}

// Node * reverse(Node *head){

//     Node * curr = head;
//     Node * prev = NULL;
//     Node * forward = NULL;

//     while(curr != NULL){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return curr;
// };

int main(){

    Node *node1= new Node(10);
    Node * head = NULL;
    Node * tail = NULL;
    print(head);
    cout<< getLength(head)<<endl;

    // insertAtHead(head , 11);
    // print(head);
    insertAtTail(tail,head, 11);
    print(head);
    insertAtTail(tail ,head, 12);
    print(head);
    insertAtTail(tail ,head, 25);
    print(head);

    insertPosition(tail,head,1,100);
    print(head);

    deleteNode(5,tail,head);
    print(head);

    reverseList(head);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
  
    // insertPosition(tail,head,8,100);
    // print(head);

    // insertAtHead(head , 71);
    // print(head);

    // insertAtHead(head , 8);
    // print(head);
    
    return 0;
}