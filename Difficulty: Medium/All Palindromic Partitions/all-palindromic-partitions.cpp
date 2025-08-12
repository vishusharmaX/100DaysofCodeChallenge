class Solution {
  public:
    vector<vector<string>>ans;
    bool checkPalli(string s){

        int i = 0, j = s.length()-1;

        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }

            i++;
            j--;
        }

        return true;

    }

    void solve(string s, int indx,vector<string>&temp){
        if(indx == s.length()){
            ans.push_back(temp);
            return;
        }
        string t ;
        for(int i = indx; i < s.length(); i++){
             t = t + s[i];
             if(checkPalli(t)){
                temp.push_back(t);
                solve(s,i+1,temp);
                temp.pop_back();
             }
        }

    }
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<string>temp;
        solve(s,0,temp);
        return ans;
    }
};