#include<bits/stdc++.h>

int mini = INT_MAX;

void push(stack<int>& s, int a) {
    // Your code goes here
    mini = min(mini,a);
    s.push(a);
}

bool isFull(stack<int>& s, int n) {
    // Your code goes here
    if(s.size() == n){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(stack<int>& s) {
    // Your code goes here
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

int pop(stack<int>& s) {
    // Your code goes here
    if(s.empty()){
        return -1;
    }
    else{
        int ans = s.top();
        mini = min(mini,ans);
        s.pop();
        
        return ans;
    }
}

int getMin(stack<int>& s) {
      int mini = 100001; 
    while(!isEmpty(s)) {
        if(s.top() < mini)
            mini = s.top();
       s.pop();
    }
    return mini;
}