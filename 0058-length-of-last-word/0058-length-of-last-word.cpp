class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int cnt = 0;
        int i = 0;
         while (i < s.length() && s[i] == ' ') {
            i++;
        }
        while (i < s.length() && s[i] != ' ') {
            cnt++;
            i++;
        }

        return cnt;
    }
};