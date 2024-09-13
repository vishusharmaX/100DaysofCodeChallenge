class Solution {
public:
    vector<int>ans;
    void solve(int left, int right,vector<int>&arr){
        int xorsum = 0;
        for(int i = left; i <= right; i++){
            xorsum^=arr[i];
        }
        ans.push_back(xorsum);     
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        
        for(int i = 0; i < queries.size(); i++){
            int left = queries[i][0];
            int right = queries[i][1];
            solve(left,right,arr);
        }

        return ans;
    }
};