class Solution {
public:
    int cnt = 0;
    bool checkPrefix(string s,string t){
        if(t.find(s) != -1){
            return true;
        }

        return false;
    }
    bool checkSuffix(string s,string t){
        string m = t;
        reverse(m.begin(),m.end());
        t = m;
        if(t.find(s) != -1){
            return true;
        }

        return false;
    }
    void solve(string s, string t){
        if(checkPrefix(s,t) && checkSuffix(s,t)){
            cnt++;
        }
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        for(int i = 0; i < words.size()-1; i++){
            for(int j = i+1; j < words.size(); j++){
                solve(words[i],words[j]);
            }
        }

        return cnt;
    }
};