class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n,0);
        
        for(int i = 0; i < n; i++){
            if (arr[i] >= 1 && arr[i] <= n) {
                ans[arr[i] - 1]++;
            }
        }
        int repeat = -1, missing  = -1;
        
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 0){
                missing  = i+1;
            }
            else if(ans[i] == 2){
                repeat  =  i+1;
            }
        }
        
        return {repeat,missing};
    }
};