//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    
    int findlen(Node * head){
        if(head == NULL)
            return NULL;
        int cnt = 0;
        while(head  != NULL){
            cnt++;
            head = head->next;
        }
        
        return cnt;
    }
    
    
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
           // Code here
        int sum=0;
        Node* curr=head;
        for( ;curr!=NULL && n>0;curr=curr->next){
            sum += curr->data;
            n--;
        }
        Node* lnode=head;
        
        while(curr!=NULL){
            sum +=curr->data;
            curr=curr->next;
            sum -=lnode->data;
            lnode=lnode->next;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
    }
    return 0;
}
// } Driver Code Ends