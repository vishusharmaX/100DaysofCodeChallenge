//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
public:
    stack<int> st1;
    stack<int> st2;
    vector<int> ans;
    
    twoStacks() {
        
    }
 
    // Function to push an integer into stack1.
    void push1(int x) {
        st1.push(x);
    }
    
    // Function to push an integer into stack2.
    void push2(int x) {
       st2.push(x);
    }
    
    // Function to remove an element from the top of stack1.
    int pop1() {
        if (!st1.empty()) {
            int element = st1.top();
            st1.pop();
            ans.push_back(element);
            return element;
        }
        ans.push_back(-1);
        return -1; // Return -1 if stack is empty
    }
    
    // Function to remove an element from the top of stack2.
    int pop2() {
        if (!st2.empty()) {
            int element = st2.top();
            st2.pop();
            ans.push_back(element);
            return element;
        }
        ans.push_back(-1);
        return -1; // Return -1 if stack is empty
    }
};



//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends