class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        
        int ans = INT_MAX;
        
        int i = 0, sum = 0;
        for(int j = 0; j < arr.size(); j++){
            sum += arr[j];
            while(sum > x){
                ans = min(ans,j-i+1);
                sum -=arr[i];
                i++;
            }
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};