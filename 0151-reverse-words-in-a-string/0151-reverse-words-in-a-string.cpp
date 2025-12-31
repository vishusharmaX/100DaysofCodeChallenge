class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;
        while(ss>>word){
            ans.push_back(word);
        }
        reverse(ans.begin(),ans.end());
        string t;
        for(int i = 0;i < ans.size(); i++){
            if(i != ans.size()-1){
                t += (ans[i]);
                t += " ";
            }else{
                 t += (ans[i]);
            }
        }
        return t;
    }
};