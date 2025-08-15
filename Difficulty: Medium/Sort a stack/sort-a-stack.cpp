/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */

void solve(stack<int>&s,int x){
    
    if(s.size() == 0  || !s.empty() && s.top() < x){
        s.push(x);
        return;
    }
    
    int ans = s.top();
    s.pop();
    solve(s,x);
    s.push(ans);
    
}

void SortedStack ::sort() {
    // Your code here
    if(s.empty())return;
    
    int ele = s.top();
    s.pop();
    sort();
    solve(s,ele);
}