class Solution {
public:
    vector<vector<string>>ans;
    bool isPallindrome(string s){

        int i = 0, j = s.length()-1;
        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }

        return true;

    }

    void solve(string &s,vector<string>&temp, int index){

        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        string pat;
        for(int i = index; i < s.size(); i++){
            pat+=s[i];
            if(isPallindrome(pat)){
                temp.push_back(pat);
                solve(s,temp,i+1);
                temp.pop_back();
            }
        }


    }

    vector<vector<string>> partition(string s) {
        vector<string>temp;
        solve(s,temp,0);
        return ans;    
    }
};