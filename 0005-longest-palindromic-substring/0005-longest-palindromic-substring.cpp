class Solution {
public:
    bool solve(string& s, int i, int j) {
        while(i <= j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int maxlen = INT_MIN;
        int n = s.length();
        int sp = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (solve(s, i, j) == true) {
                    if (j - i + 1 > maxlen) {
                        maxlen = j - i + 1;
                        sp = i;
                    }
                }
            }
        }

        return s.substr(sp, maxlen);
    }
};