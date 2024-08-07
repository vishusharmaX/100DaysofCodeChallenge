class Solution {
public:
    bool closeStrings(string s, string t) {

        bool ans = true;
        map<char, int> mpp1, mpp2;
        if(s.length() != t.length()){
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            mpp1[s[i]]++;
        }

        for (int j = 0; j < t.length(); j++) {
            mpp2[t[j]]++;
        }
        vector<int> ans1, ans2;

        for (auto it : mpp1) {
            ans1.push_back(it.second);
        }
        for (auto it : mpp2) {
            ans2.push_back(it.second);
        }
        sort(ans1.begin(), ans1.end());
        sort(ans2.begin(), ans2.end());
        int i = 0, j = 0;
        if(ans1.size() != ans2.size())
            return false;
        while( i < ans1.size() && j < ans2.size()){
            if(s[i] != s[j]){
                return  false;
            }
            i++;
            j++;
        }
        
        return ans;
    }
};