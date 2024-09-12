class Solution {
public:
    bool solve(map<char,int>mpp, string s){
        for(int i = 0; i < s.length(); i++){
            if(mpp.find(s[i]) == mpp.end())
                return false;
        }

        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int>mpp;
        for(auto it : allowed){
            mpp[it]++;
        }

        int cnt  = 0;
        for(int i = 0; i <words.size(); i++){
            if(solve(mpp,words[i])){
                cnt++;
            }
        }

        return cnt;
    }
};