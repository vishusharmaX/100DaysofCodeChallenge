// User function Template for C++
class Solution {
  public:
    
    void solve(int n, vector<int>&v, vector<int>&ans){
        
        if(n == 0){
            int res=0;
            for(int i = 0; i < v.size(); i++){
                res = res*10 + v[i];
            }
            ans.push_back(res);
        }
        
        for(int i = 1; i <=9; i++){
            if(v.size() == 0 || i > v[v.size()-1]){
                v.push_back(i);
                solve(n-1,v,ans);
                v.pop_back();
            }
        } 
        
    }
  
    vector<int> increasingNumbers(int n) {
        // Write Your Code here
        vector<int>ans;
        if(n == 1){
            for(int i  = 0; i<=9; i++){
                ans.push_back(i);
            }
            
            return ans;
        }
        vector<int>v;
        solve(n,v,ans);
        return ans;
    }
};