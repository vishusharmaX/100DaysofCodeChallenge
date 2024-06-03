class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0, r = 0 , maxlen = 0;
        map<char,int>mpp;
        while(r<n){

            if(mpp.find(s[r]) != mpp.end()){
                if(mpp[s[r]] >= l){
                    l = mpp[s[r]]+1;
                }
            }

            int len = r - l+1;
            maxlen = max(maxlen,len);
            mpp[s[r]] = r;
            r++;
        }

        return maxlen;

    }
};