class Solution {
public:
    int solve(int i, string s, int n , unordered_set<string>&st){

        if(i >= n){
            return 0;
        }

        int result = 1 + solve(i+1,s,n,st);

        for(int j = i; j< n; j++){
            string curr = s.substr(i,j-i+1);
            if(st.find(curr) != st.end())
                result = min(result, solve(j+1,s,n,st));
        }

        return result;

    }

    int minExtraChar(string s, vector<string>& dict) {
        int n = s.length();
        unordered_set<string>st(begin(dict),end(dict));

        return solve(0,s,n,st);
    }
};