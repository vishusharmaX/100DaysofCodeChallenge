class Solution {
public:
    int longestIdealString(string s, int k) {
        int n  = s.length();

        vector<int>t(n+1,1);
        int result = 1;
        for(int  i = 1; i < n ; i++){
            for(int j = i-1; j>=0 ;j--){
                if(abs(s[i] - s[j]) <=  k)
                   t[i] = max(t[i],t[j]+1);
            }
            result = max(result,t[i]);
        }

        return result;
    }
};