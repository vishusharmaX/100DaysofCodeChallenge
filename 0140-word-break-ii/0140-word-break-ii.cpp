class Solution {
public:
    vector<string>ans;
    void solve(string s, int indx, vector<string>&temp, set<string>&st){
        
        if(indx == s.size()){
            string t;
            for(int i = 0; i < temp.size(); i++){
                 t+=temp[i];
                 if(i != temp.size()-1){
                    t+=" ";
                 }
            }

            ans.push_back(t);
            return;
        }
        string word;
        for(int i = indx ;i < s.size(); i++){
            word += s[i];
            if(st.find(word)!= st.end()){
                temp.push_back(word);
                solve(s,i+1,temp,st);
                temp.pop_back();
            }
        }

    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>temp;
        set<string>st;
        for(auto it : wordDict){
            st.insert(it);
        }
        solve(s,0,temp,st);
        return ans;
    }
};