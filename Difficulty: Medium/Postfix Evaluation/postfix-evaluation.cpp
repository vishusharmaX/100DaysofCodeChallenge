class Solution {
  public:
    void solve(stack<int>&st,string op){
        
        
        int a  = (st.top());
        st.pop();
        int b = (st.top());
        st.pop();
        int result = 0;
        if (op == "+") result = b + a;
        else if (op == "-") result = b - a;
        else if (op == "*") result = b * a;
        else if (op == "/") result = b / a;

        st.push(result);
        
    }
  
    int evaluate(vector<string>& arr) {
        // code here
        stack<int>st;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/"){
                solve(st,arr[i]);
            }
            else{
                st.push(stoi(arr[i]));
            }
        }
        
        return st.top();
    }
};