//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{   
    struct Node * reverse(struct Node* head){
        Node * curr= head;
        Node * prev= NULL;
        Node * next = NULL;
        
        while(curr!=NULL){
            next= curr->next;
            curr->next=prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second = reverse(second);
        
        int sum = 0;
        int carry = 0;
        Node * temp = NULL;
        Node * head = NULL;
        Node * tail = NULL;
        
        while(first!=NULL || second !=NULL){
            sum = carry + (first ? first->data : 0) +  (second ? second->data : 0);
            carry = (sum>=10) ? 1 : 0 ;
            sum = sum % 10 ;
            
            temp = new Node(sum);
            
            if(head == NULL){
                head = temp ;
            }
            else{
                tail->next = temp ;
            }
            tail = temp;
            
            if(first) first = first->next;
            if(second)second = second->next;
        }
        if(carry > 0){
            tail->next =new Node(carry);
        }
        
        head = reverse(head);
         while (head->next && head->data == 0) {
            head = head->next;
        }
        return head;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends