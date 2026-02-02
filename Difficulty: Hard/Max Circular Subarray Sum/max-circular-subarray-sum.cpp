class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int totalsum  = 0;
        int maxending = arr[0] , maxi = arr[0];
        int minending = arr[0] , mini = arr[0];
        totalsum = arr[0];
        for(int i = 1; i < arr.size(); i++){
            totalsum += arr[i];
            
            maxending = max(arr[i] , maxending + arr[i]);
            maxi = max(maxending,maxi);
            
            minending = min(arr[i] , minending + arr[i]);
            mini = min(minending,mini);
        }
        
        if(maxi < 0){
            return maxi;
        }
        
       int finalans = max(maxi, totalsum - mini);
        
        return finalans;
    }
};