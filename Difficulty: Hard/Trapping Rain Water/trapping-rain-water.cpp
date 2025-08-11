class Solution {
  public:
    vector<int>solve(vector<int>arr,int n){
        vector<int>ans(n,-1);
        ans[0] = arr[0];
        for(int i = 1; i<n; i++){
            ans[i] = max(arr[i],ans[i-1]);
        }
        
        return ans;
        
        
    }
    vector<int>solve1(vector<int>arr,int n){
        vector<int>ans(n,-1);
        ans[n-1] = arr[n-1];
        for(int i = n-2; i>= 0; i--){
            ans[i] = max(arr[i],ans[i+1]);
        }
        return ans;
        
    }
  
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>leftmax = solve(arr,n);
        vector<int>rightmax = solve1(arr,n);
        int total = 0;
        for(int i =0; i < arr.size(); i++){
            int h = min(leftmax[i],rightmax[i]);
            int w = arr[i];
            
            total = total + (h-w);
        }
        
        return total;
    }
};