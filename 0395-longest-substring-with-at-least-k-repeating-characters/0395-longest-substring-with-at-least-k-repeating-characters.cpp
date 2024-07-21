class Solution {
public:
    int longestSubstring(string s, int k) {
        int  i = 0 , j = 0 ;
        int n = s.length();
        map<char,int>mpp;
        int ans = 0;
        while(j < n){
            mpp[s[j]]++;
           
            
            // if(mpp.size() > k){
            //     while(mpp.size() > k){
            //         mpp[s[i]]--;
            //         if(mpp[s[i]] == 0){
            //             mpp.erase(s[i]);
            //         }
            //         i++;
            //     }
            // }
            j++;
        }
         for(auto it : mpp){
                if(it.second >=k){
                    ans += it.second;
                }
            }
        return ans;
    }
};