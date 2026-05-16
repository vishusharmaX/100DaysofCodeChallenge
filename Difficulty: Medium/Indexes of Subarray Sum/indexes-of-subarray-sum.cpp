class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int i = 0 , j = 0;
        int currsum = 0;
        int n = arr.size();
        while( j < n){
            currsum += arr[j];
            
            if(currsum > target){
                while(currsum > target){
                    currsum -= arr[i];
                    i++;
                }
            }
            
            if(currsum == target){
                return {i+1,j+1};
            }
            j++;
        }
        
        
        return {-1};
    }
};