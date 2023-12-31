class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>mpp;
        int n = s.size();
        for(int i  = 0 ; i <n ; i++ ){
            mpp[s[i]]++;
        }

        int ans = -1;
        
        for (auto it : mpp) {
            if (it.second >= 2) {
                int first_occurrence = s.find(it.first);
                int last_occurrence = s.rfind(it.first);
                ans = max(ans, last_occurrence - first_occurrence - 1);
            }
        }

        return ans;
    }
};