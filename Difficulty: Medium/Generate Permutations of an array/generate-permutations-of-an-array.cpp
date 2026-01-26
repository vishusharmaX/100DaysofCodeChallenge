class Solution {
  public:
    
    vector<vector<int>>ans;
    
    void solve(vector<int>&arr, int indx,vector<int>temp){
        
        if(indx >= arr.size()){
             ans.push_back(arr);
            return;
        }
        
        for(int i = indx; i < arr.size(); i++){
           
            swap(arr[indx] , arr[i]);
            solve(arr,indx+1,temp);
            swap(arr[indx] , arr[i]);
        }
        
    }
  
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        
        vector<int>temp;
        solve(arr,0,temp);
        return ans;
        
    }
};