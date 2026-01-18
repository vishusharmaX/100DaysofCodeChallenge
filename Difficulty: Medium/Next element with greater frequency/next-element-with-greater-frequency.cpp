class Solution {
  public:
    vector<int> nextFreqGreater(vector<int>& arr) {
        // code here
        int n = arr.size();
        map<int,int>mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        vector<int>ans(n,-1);
        stack<int>st;
        
        for(int i = n-1 ; i>= 0;i--){
            
            while(!st.empty() && mpp[arr[st.top()]] <= mpp[arr[i]]){
                st.pop();
            }
            
            if(!st.empty()){
                ans[i] = arr[st.top()];
            }
            
             st.push(i);
        }
        
        return ans;
    }
};

