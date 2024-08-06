class Solution {
public:
    int minimumPushes(string word) {
        int result = 0;
        vector<int>ans(26,0);
        for(auto it : word){
            ans[it - 'a']++;
        }
        sort(ans.begin(),ans.end(),greater<int>());
        for(int i = 0; i < ans.size(); i++){
            int freq = ans[i];
            int press = (i/8 +1);
            result += (freq*press);
        }

        return result;
    }
};