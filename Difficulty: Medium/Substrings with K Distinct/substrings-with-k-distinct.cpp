class Solution {
  public:
    
    int solve(string& str,int k){
        int n=str.length();
        
        vector<int> mp(26,0);
        
        int l=0;
        int r=0;
        int cnt=0;
        int ans=0;
        
        while(r<n){
            mp[str[r]-'a']++;
            
            if(mp[str[r]-'a']==1){
                cnt++;
            }
            
            while(cnt>k){
                mp[str[l]-'a']--;
                if(mp[str[l]-'a']==0){
                    cnt--;
                }
                l++;
            }
            
            r++;
            
            ans+=r-l+1;
        
            
        }
        
        return ans;
    }
    
    int countSubstr(string& s, int k) {
        // code here
        return solve(s,k)-solve(s,k-1);
        
    }
};