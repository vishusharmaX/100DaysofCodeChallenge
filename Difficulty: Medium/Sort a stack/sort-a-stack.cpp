/*The structure of the class is
class SortedStack{
public:
    stack<int> s;
    void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */

void sortkarkelao(stack<int>&st, int num){
    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);
        return;
    }
    
    int ans = st.top();
    st.pop();
    sortkarkelao(st,num);
    st.push(ans);
}


void SortedStack ::sort() {
    // Your code here
    
    if(s.empty()){
        return;
    }
    
    int num = s.top();
    s.pop();
     sort();
    sortkarkelao(s,num);
    
    
    
}