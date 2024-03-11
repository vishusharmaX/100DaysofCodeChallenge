
class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mpp;

        for (char ch : s) {
            mpp[ch]++;
        }

        string ans = "";
        for (char it : order) {
            if (mpp.find(it) != mpp.end()) {
                ans += string(mpp[it], it);
                mpp.erase(it);
            }
        }

        for (char it : s) {
            if (mpp.find(it) != mpp.end()) {
                ans += string(mpp[it], it);
                mpp.erase(it);
            }
        }

        return ans;
    }
};