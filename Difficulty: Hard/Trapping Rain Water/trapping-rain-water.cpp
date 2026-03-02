class Solution {
public:
    
    vector<int> leftarr(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[0] = arr[0];

        for(int i = 1; i < n; i++){
            ans[i] = max(ans[i-1], arr[i]);
        }

        return ans;
    }
    
    vector<int> rightarr(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        ans[n-1] = arr[n-1];

        for(int i = n-2; i >= 0; i--){
            ans[i] = max(ans[i+1], arr[i]);
        }

        return ans;
    }
  
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        if(n == 0) return 0;

        vector<int> left = leftarr(arr);
        vector<int> right = rightarr(arr);

        int tw = 0;
        for(int i = 0; i < n; i++){
            tw += min(left[i], right[i]) - arr[i];
        }

        return tw;
    }
};