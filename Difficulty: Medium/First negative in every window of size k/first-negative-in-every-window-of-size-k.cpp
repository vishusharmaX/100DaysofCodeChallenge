class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int>dq;
        vector<int>ans;
        
        for(int i = 0; i < k ; i++){
            if(arr[i] < 0){
                dq.push_back(i);
            }
        }
        
        if(dq.size() == 0){
            ans.push_back(0);
        }else{
            ans.push_back(arr[dq.front()]);
        }
        
        for(int i = k; i< arr.size(); i++){
            if(!dq.empty() && i - dq.front() >= k){
                dq.pop_front();
            }
            if(arr[i] < 0){
                dq.push_back(i);
            }
             if(dq.size() == 0){
            ans.push_back(0);
            }else{
                ans.push_back(arr[dq.front()]);
            }
            
        }
        return ans;
        
        
    }
};