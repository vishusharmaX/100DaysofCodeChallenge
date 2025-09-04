class Solution {
  public:
    bool solve(string s, int indx, map<string,int>&mpp, vector<int>&dp){
        if(indx>= s.length())return 1;
        string temp ="";
        
        if(dp[indx] != -1)return dp[indx];
        
        for(int i = indx; i < s.length(); i++){
            temp += s[i];
            if(mpp.find(temp)!= mpp.end()){
                if(solve(s,i+1,mpp,dp)) return dp[i] = true;
            }
        }
        return dp[indx] = false;
    }

    bool wordBreak(string &s, vector<string> &dictionary) {
        // code here
        int n = s.size();
        map<string,int>mpp;
        for(auto it : dictionary)mpp[it]++;
        vector<int>dp(n+1,-1);
        return solve(s,0,mpp,dp);
    }
};