class Solution {
  public:
    string smallestWindow(string &s, string &p) {
        // code here
        int i = 0 , j = 0, n = s.length();
        int cnt  = 0;
        map<char,int>mpp;
        for(auto it : p)mpp[it]++;
        cnt = mpp.size();
        
        int start = 0, end = INT_MAX;
        while(j < n){
            if(mpp.find(s[j])!= mpp.end()){
                mpp[s[j]]--;
                if(mpp[s[j]] == 0){
                    cnt--;
                }
            }
            
            if(cnt == 0){
                
                while(cnt  == 0){
                    
                    if(end > j-i+1){
                        end = j-i+1;
                        start = i;
                    }
                    
                    
                    if(mpp.find(s[i]) != mpp.end()){
                        mpp[s[i]]++;
                        if(mpp[s[i]] > 0){
                            cnt++;
                        }
                    }
                    
                    i++;
                    
                }
                
            }
            
            j++;
            
        }
        
        
        if(end == INT_MAX)return "";
        
        return s.substr(start,end);
        
        
    }
};