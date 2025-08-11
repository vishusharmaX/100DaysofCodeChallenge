class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        vector<int>ans(a.begin(),a.end());
        for(auto it: b){
            ans.push_back(it);
        }
        
        sort(ans.begin(),ans.end());
        double res = 0;
        int n = ans.size();
        if(n & 1){
            res = ans[n/2];
        }
        
        else{
            res = (double)(ans[n/2] + ans[(n/2) -1])/2;
        }
        
        return res;
        
        
    }
};