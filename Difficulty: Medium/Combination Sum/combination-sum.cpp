// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    vector<vector<int>>ans;
    
    void solve(vector<int>&arr,int indx,int sum,vector<int>temp, int target){
        
        if(sum == target){
            ans.push_back(temp);
            return;
        }
        
        if(sum > target || indx>= arr.size())return;
        
        solve(arr,indx+1,sum,temp,target);
        
        temp.push_back(arr[indx]);
        solve(arr,indx,sum+arr[indx],temp,target);
        temp.pop_back();
    }
    
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        vector<int>temp;
        solve(arr,0,0,temp,target);
        return ans;
    }
};