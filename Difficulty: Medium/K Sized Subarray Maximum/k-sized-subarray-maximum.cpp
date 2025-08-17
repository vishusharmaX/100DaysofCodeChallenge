class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        deque<int>dq;
        vector<int>ans;
        for(int i  = 0; i < k; i++){
            // cout<<arr[i]<<" ";
            // cout<<endl;
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        // cout<<"f ele"<<dq.front();
        ans.push_back(arr[dq.front()]);
        
        
        for(int i=k; i< n; i++){
            while(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            
            
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            
            dq.push_back(i);
            ans.push_back(arr[dq.front()]);
            
            
        }
        
        return ans;
        
    }
};