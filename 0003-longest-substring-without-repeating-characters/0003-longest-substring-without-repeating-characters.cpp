class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =  0 , j = 0;
        int  n = s.length();
        map<char,int>mpp;
        int maxlen = 0;
        while(j < n){
            mpp[s[j]]++;

            if(mpp.size() == j-i+1){
                maxlen = max(maxlen,j-i+1);
            }
            if(mpp.size() < j-i+1){
                while(mpp.size() < j-i+1){
                    mpp[s[i]]--;
                    if(mpp[s[i]] == 0){
                        mpp.erase(s[i]);
                    }
                    i++;
                }
            }

            j++;
        }

        return maxlen;

    }
};