// User function Template for C++
class Solution {
public:
    void solve(vector<vector<string>>& list, vector<string>& output, vector<vector<string>>& ans, int i, int n) {
        // Base case: all rows are processed
        if (i >= n) {
            ans.push_back(output);
            return;
        }

        // Iterate over all words in the current row
        for (int k = 0; k < list[i].size(); k++) {
            string temp = list[i][k];
            if (!temp.empty()) {
                output.push_back(temp);              // Choose
                solve(list, output, ans, i + 1, n);  // Explore
                output.pop_back();                  // Un-choose (backtrack)
            }
        }
    }

    vector<vector<string>> sentences(vector<vector<string>>& list) {
        vector<string> output;
        vector<vector<string>> ans;
        int n = list.size();
        solve(list, output, ans, 0, n);
        return ans;
    }
};
