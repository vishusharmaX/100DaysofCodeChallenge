class Solution {
public:
    int minimumPushes(string word) {
        int result = 0;
        vector<int>ans(26,0);
        for(int i = 0; i < word.size(); i++){
            ans[word[i]-'a']++;
        }
        sort(ans.begin(),ans.end(),greater<int>());

        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 0)break;
            int freq = ans[i];
            int pres = (i/8 +1);
            result += (freq*pres);
        }

        return result;

    }
};