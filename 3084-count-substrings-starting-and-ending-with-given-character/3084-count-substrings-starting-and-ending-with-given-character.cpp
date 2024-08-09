class Solution {
public:
    long long countSubstrings(string s, char c) {
            long long cnt = 0;
            long long ans = 0;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == c){
                    ans += (1+ cnt);
                    cnt++;
                }
            }

            return ans;
    }
};