#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;

    //Constructor ko kaise use karna h LL mai ;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    //destructor 
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }

};


void InsertAtHead(Node* &head , int d) {
    //new node create 
    Node*temp = new Node(d);
    temp->next = head;
    head = temp;
};
void InsertAtTail(Node* &tail , int d) {
    //new node create 
    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
};

void insertAtPosition(Node * &tail,Node * &head,int position , int d){

    //insert at the start 
    if(position ==1){
        InsertAtHead(head,d);
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
        InsertAtTail(tail , d);
        return;
    }

    //creatiing a node for d

    Node *nodetoInsert= new Node(d);
    nodetoInsert ->next = temp->next;
    temp->next= nodetoInsert;

}

void print(Node* &head){
   Node *temp = head;
   while (temp!= NULL)
   {
    cout<< temp->data <<" ";
    temp= temp->next;
   }
   cout<<endl;
}; 

void deleteNode(int position, Node* & head,Node* & tail) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
};

int main(){
    //created a new Node
    Node* node1 = new Node(10); 
    // cout<<node1->data <<endl;
    // cout<<node1->next <<endl;

    //head pointed to node1
    Node * head = node1;   
    Node *tail = node1; 
    print(head);
    InsertAtTail(tail,12);
    print(head);
    InsertAtTail(tail,15);
    print(head);
     
    insertAtPosition(tail,head,4,22);
    print(head);

    cout<< "Head "<<head->data <<endl;
    cout<< "Tail "<<tail->data <<endl;

    deleteNode(4,head,tail);
    print(head);
    cout<< "Head "<<head->data <<endl;
    cout<< "Tail "<<tail->data <<endl;

    // print(head);
    // InsertAtHead(head,12);
    // print(head);
    // InsertAtHead(head,15);
    // print(head);
    // return 0;
}