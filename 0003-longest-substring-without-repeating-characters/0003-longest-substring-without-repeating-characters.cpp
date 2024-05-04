class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int longest = 0;

        for (int i = 0; i < s.size(); i++) {
            st.clear();

            int cnt = 0;

            while(i < s.size() && st.find(s[i]) == st.end()){
                st.insert(s[i]);
                cnt++;
                i++;
            }



            longest = max(longest, cnt);
        }

        return longest;
    }
};
