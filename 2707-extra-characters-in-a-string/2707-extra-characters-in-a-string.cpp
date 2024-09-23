class Solution {
public:
    int solve(string s, int index, vector<string>& dictionary, vector<int> &dp) {
        if(index == s.size()) {
            return 0;
        }
        
        if(dp[index] != -1)
            return dp[index];
        int a = 1e8, b = 1e8;

        for (auto& word : dictionary) {
            if (s.substr(index, word.size()) == word) {
                a = min(a, solve(s, index + word.size(), dictionary, dp));
            }
        }

        b = 1 + solve(s, index + 1, dictionary, dp);

        return dp[index] = min(a, b);

    }
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int> dp(s.size() + 1, -1);
        return solve(s, 0, dictionary, dp);
    }
};