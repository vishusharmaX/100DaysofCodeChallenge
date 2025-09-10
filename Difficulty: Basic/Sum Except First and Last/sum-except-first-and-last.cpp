class Solution {
  public:
    /*You are required to complete this method*/
    int solve(vector<int>&arr, int indx, int sum){
        
        if(indx >= arr.size()-1){
            return sum;
        }
        
        return solve(arr, indx+1, sum+ arr[indx]);
        
    }
    
    
    
    int sumExceptFirstLast(vector<int>& arr) {
        // Your code here
        if (arr.size() <= 2) return 0; 
        return solve(arr, 1, 0); 
    }
};