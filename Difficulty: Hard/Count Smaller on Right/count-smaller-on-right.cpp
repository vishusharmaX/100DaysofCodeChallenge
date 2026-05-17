class Solution {
  public:
    vector<int> lowerArray(vector<int> &arr) {
        // code here
        vector<int>ans;
        vector<int>res(arr.size(),0);
        
        for(int i = arr.size()-1; i >= 0; i--){
            int pos = lower_bound(ans.begin(),ans.end(),arr[i])-ans.begin();
            res[i] = pos;
            ans.insert(ans.begin()+pos,arr[i]);
        }
        
        return res;
        
    }
};